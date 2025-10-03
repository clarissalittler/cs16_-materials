// CS161A Interactive Text - Application JavaScript

window.codeBlocks = window.codeBlocks || {};
window.editors = {};
let currentEditor = null;
let api = null;
let inputBuffer = [];
let inputResolver = null;

// Initialize Monaco Editor after page loads
function initializeMonaco() {
    if (typeof require === 'undefined') {
        console.error('Monaco loader not ready, retrying...');
        setTimeout(initializeMonaco, 100);
        return;
    }

    require.config({
        paths: { 'vs': 'https://cdnjs.cloudflare.com/ajax/libs/monaco-editor/0.48.0/min/vs' }
    });

    require(['vs/editor/editor.main'], function() {
        console.log('Monaco loaded. Creating editors for:', Object.keys(codeBlocks));

        // Create editors for all code blocks
        Object.keys(codeBlocks).forEach(editorId => {
            const element = document.getElementById(editorId);
            if (element) {
                try {
                    const editor = monaco.editor.create(element, {
                        value: codeBlocks[editorId].current,
                        language: 'cpp',
                        theme: 'vs-dark',
                        minimap: { enabled: false },
                        fontSize: 14,
                        scrollBeyondLastLine: false,
                        automaticLayout: true
                    });

                    editors[editorId] = editor;

                    // Update current code on edit
                    editor.onDidChangeModelContent(() => {
                        codeBlocks[editorId].current = editor.getValue();
                    });

                    console.log('Created editor:', editorId);
                } catch (err) {
                    console.error('Failed to create editor', editorId, err);
                }
            } else {
                console.warn('Element not found for editor:', editorId);
            }
        });
    }, function(err) {
        console.error('Failed to load Monaco:', err);
    });
}

// Start Monaco initialization when page is ready
if (document.readyState === 'loading') {
    document.addEventListener('DOMContentLoaded', initializeMonaco);
} else {
    initializeMonaco();
}

// Attach event listeners to buttons
document.addEventListener('DOMContentLoaded', () => {
    // Run code buttons
    document.querySelectorAll('.run-code-btn').forEach(button => {
        button.addEventListener('click', () => {
            const editorId = button.getAttribute('data-editor-id');
            runCode(editorId);
        });
    });

    // Reset code buttons
    document.querySelectorAll('.reset-code-btn').forEach(button => {
        button.addEventListener('click', () => {
            const editorId = button.getAttribute('data-editor-id');
            resetCode(editorId);
        });
    });

    // Close terminal button
    const closeBtn = document.getElementById('close-terminal-btn');
    if (closeBtn) {
        closeBtn.addEventListener('click', closeTerminal);
    }
});

// Load wasm-clang API (if available)
const scriptPromise = new Promise((resolve) => {
    const script = document.createElement('script');
    script.src = 'assets/shared.js';  // Change to 'assets/shared.js' if you copy assets/ into website/
    script.onload = () => {
        api = new API({
            async readBuffer(filename) {
                const resp = await fetch(`assets/${filename}`);
                return resp.arrayBuffer();
            },
            async compileStreaming(filename) {
                const resp = await fetch(`assets/${filename}`);
                return WebAssembly.compile(await resp.arrayBuffer());
            },
            hostWrite(s) {
                appendTerminal(s, 'output');
            },
            async hostRead() {
                return await readInput();
            }
        });

        api.ready.then(() => resolve(api));
    };
    script.onerror = () => {
        console.log('wasm-clang not available, using fallback');
        resolve(null);
    };
    document.head.appendChild(script);
});

// Terminal functions
function appendTerminal(text, className = 'output') {
    const terminal = document.getElementById('terminal-output');
    const lines = text.split('\n');
    lines.forEach((line, i) => {
        if (i < lines.length - 1 || line.length > 0) {
            const div = document.createElement('div');
            div.className = `terminal-line ${className}`;
            div.textContent = line;
            terminal.appendChild(div);
        }
    });
    terminal.scrollTop = terminal.scrollHeight;
}

function clearTerminal() {
    document.getElementById('terminal-output').innerHTML = '';
    inputBuffer = [];
    hideInput();
}

function showTerminal() {
    document.getElementById('terminal-overlay').classList.remove('hidden');
    clearTerminal();
}

function closeTerminal() {
    document.getElementById('terminal-overlay').classList.add('hidden');
    clearTerminal();
}

function showInput() {
    const inputArea = document.getElementById('input-area');
    const userInput = document.getElementById('user-input');
    inputArea.classList.remove('hidden');
    userInput.value = '';
    userInput.focus();
}

function hideInput() {
    const inputArea = document.getElementById('input-area');
    if (inputArea) {
        inputArea.classList.add('hidden');
    }
}

async function readInput() {
    if (inputBuffer.length > 0) {
        return inputBuffer.shift();
    }

    showInput();
    const input = await new Promise(resolve => {
        inputResolver = resolve;
    });

    inputBuffer = input.split('').map(c => c.charCodeAt(0));
    inputBuffer.push(10); // newline

    hideInput();
    return inputBuffer.shift();
}

// Handle input submission
document.addEventListener('DOMContentLoaded', () => {
    const userInput = document.getElementById('user-input');
    if (userInput) {
        userInput.addEventListener('keypress', (e) => {
            if (e.key === 'Enter' && inputResolver) {
                const value = userInput.value;
                appendTerminal('→ ' + value, 'input-echo');
                const callback = inputResolver;
                inputResolver = null;
                callback(value);
            }
        });
    }
});

// Run code
async function runCode(editorId) {
    console.log('Running code from editor:', editorId);

    // Check if editor exists
    if (!editors[editorId]) {
        alert('Editor not ready yet. Please wait a moment and try again.');
        return;
    }

    currentEditor = editorId;
    const code = editors[editorId].getValue();

    if (!code || code.trim().length === 0) {
        alert('No code to run!');
        return;
    }

    showTerminal();
    appendTerminal('Compiling...', 'info');

    try {
        await scriptPromise;

        if (!api) {
            appendTerminal('Error: Compiler not available', 'error');
            appendTerminal('Please make sure test1/assets/ is accessible', 'error');
            appendTerminal('', 'info');
            appendTerminal('You can still edit the code, but cannot run it.', 'info');
            return;
        }

        clearTerminal();
        appendTerminal('Program output:', 'info');
        appendTerminal('─'.repeat(40), 'info');

        await api.compileLinkRun(code);

        appendTerminal('─'.repeat(40), 'info');
        appendTerminal('Program finished.', 'info');

    } catch (err) {
        appendTerminal('', 'output');
        appendTerminal('Error: ' + err.message, 'error');
        console.error('Compilation error:', err);
    }
}

// Reset code
function resetCode(editorId) {
    if (editors[editorId]) {
        const original = codeBlocks[editorId].original;
        editors[editorId].setValue(original);
        codeBlocks[editorId].current = original;
    }
}
