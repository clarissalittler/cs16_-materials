#!/usr/bin/env python3
"""
Generate an interactive website from text.org with Monaco editor integration.
Each ** heading becomes a page, code blocks become editable in Monaco.
"""

import re
import os
import json
from pathlib import Path
from html import escape

def parse_org_file(filepath):
    """Parse org file into structured data."""
    with open(filepath, 'r') as f:
        content = f.read()

    # Structure: chapters (*, **) and content
    chapters = []
    current_chapter = None
    current_section = None
    current_content = []

    lines = content.split('\n')
    i = 0

    while i < len(lines):
        line = lines[i]

        # Top-level chapter (* heading)
        if line.startswith('* ') and not line.startswith('** '):
            # Save previous section
            if current_section:
                current_section['content'] = '\n'.join(current_content)
                if current_chapter:
                    current_chapter['sections'].append(current_section)

            # Save previous chapter
            if current_chapter:
                chapters.append(current_chapter)

            # Start new chapter
            title = line[2:].strip()
            current_chapter = {
                'title': title,
                'sections': [],
                'level': 1
            }
            current_section = None
            current_content = []

        # Section (** heading)
        elif line.startswith('** '):
            # Save previous section
            if current_section:
                current_section['content'] = '\n'.join(current_content)
                if current_chapter:
                    current_chapter['sections'].append(current_section)

            # Start new section
            title = line[3:].strip()
            current_section = {
                'title': title,
                'content': '',
                'level': 2
            }
            current_content = []

        else:
            # Add to current content
            current_content.append(line)

        i += 1

    # Save final section and chapter
    if current_section:
        current_section['content'] = '\n'.join(current_content)
        if current_chapter:
            current_chapter['sections'].append(current_section)
    if current_chapter:
        chapters.append(current_chapter)

    return chapters

def extract_code_blocks(content):
    """Extract C++ code blocks from org content."""
    # Pattern: #+begin_src cpp ... #+end_src
    pattern = r'#\+begin_src cpp[^\n]*\n(.*?)#\+end_src'
    blocks = []

    for match in re.finditer(pattern, content, re.DOTALL):
        code = match.group(1).rstrip()
        blocks.append({
            'code': code,
            'start': match.start(),
            'end': match.end()
        })

    return blocks

def org_to_html(content, section_id):
    """Convert org-mode content to HTML with code blocks as Monaco editors."""
    # Extract code blocks first
    code_blocks = extract_code_blocks(content)

    # Replace code blocks with placeholders
    html_parts = []
    last_end = 0
    code_id = 0

    for block in code_blocks:
        # Add content before code block
        before = content[last_end:block['start']]
        html_parts.append(org_text_to_html(before))

        # Add Monaco editor placeholder
        editor_id = f"editor-{section_id}-{code_id}"
        html_parts.append(f'''
<div class="code-block">
    <div class="code-toolbar">
        <button class="run-code-btn" data-editor-id="{editor_id}">▶ Run Code</button>
        <button class="reset-code-btn" data-editor-id="{editor_id}">↻ Reset</button>
    </div>
    <div id="{editor_id}" class="code-editor"></div>
    <script>
        (function() {{
            const code = {json.dumps(block['code'])};
            if (typeof codeBlocks === 'undefined') window.codeBlocks = {{}};
            codeBlocks['{editor_id}'] = {{
                original: code,
                current: code
            }};
        }})();
    </script>
</div>
''')

        last_end = block['end']
        code_id += 1

    # Add remaining content
    html_parts.append(org_text_to_html(content[last_end:]))

    return ''.join(html_parts)

def org_text_to_html(text):
    """Convert org-mode text markup to HTML."""
    if not text.strip():
        return ''

    # Remove org directives
    text = re.sub(r'#\+\w+:.*\n?', '', text)

    # Convert org markup
    lines = text.split('\n')
    html_lines = []
    in_list = False

    for line in lines:
        # Check for headings FIRST before processing markup
        heading_match = re.match(r'^(\*{3,})\s+(.+)$', line)

        # Bullet points
        if line.strip().startswith('+ ') or line.strip().startswith('- '):
            if not in_list:
                html_lines.append('<ul>')
                in_list = True
            # Process markup in list items - CODE FIRST
            item_text = line.strip()[2:]
            # Protect code markup by processing it first
            code_placeholders = []
            def save_code(match):
                code_placeholders.append(f'<code>{match.group(1)}</code>')
                return f'__CODE_{len(code_placeholders)-1}__'
            # Match =text= or ~text~ but allow any content inside
            item_text = re.sub(r'=([^=]+)=', save_code, item_text)
            item_text = re.sub(r'~([^~]+)~', save_code, item_text)
            # Now do bold/italic
            item_text = re.sub(r'(?<![*\w])\*([^\s*][^*]*?[^\s*]|\S)\*(?![*\w])', r'<strong>\1</strong>', item_text)
            item_text = re.sub(r'(?<![/\w])/([^\s/][^/]*?[^\s/]|\S)/(?![/\w])', r'<em>\1</em>', item_text)
            # Restore code
            for i, code in enumerate(code_placeholders):
                item_text = item_text.replace(f'__CODE_{i}__', code)
            html_lines.append(f'<li>{item_text}</li>')
        else:
            if in_list:
                html_lines.append('</ul>')
                in_list = False

            if line.strip():
                if heading_match:
                    # Headings - don't process markup
                    level = min(len(heading_match.group(1)), 6)
                    html_lines.append(f'<h{level}>{heading_match.group(2)}</h{level}>')
                else:
                    # Regular text - process CODE markup first to protect it
                    code_placeholders = []
                    def save_code(match):
                        code_placeholders.append(f'<code>{match.group(1)}</code>')
                        return f'__CODE_{len(code_placeholders)-1}__'
                    # Match =text= or ~text~ but allow any content inside
                    line = re.sub(r'=([^=]+)=', save_code, line)
                    line = re.sub(r'~([^~]+)~', save_code, line)
                    # Now do bold/italic without interfering with code
                    line = re.sub(r'(?<![*\w])\*([^\s*][^*]*?[^\s*]|\S)\*(?![*\w])', r'<strong>\1</strong>', line)
                    line = re.sub(r'(?<![/\w])/([^\s/][^/]*?[^\s/]|\S)/(?![/\w])', r'<em>\1</em>', line)
                    # Restore code
                    for i, code in enumerate(code_placeholders):
                        line = line.replace(f'__CODE_{i}__', code)
                    html_lines.append(f'<p>{line}</p>')
            else:
                html_lines.append('<br>')

    if in_list:
        html_lines.append('</ul>')

    return '\n'.join(html_lines)

def generate_page_html(section, section_id, chapter_title, nav_data):
    """Generate HTML for a single page."""
    content_html = org_to_html(section['content'], section_id)

    # Build navigation
    prev_link = ''
    next_link = ''

    if nav_data['prev']:
        prev_link = f'<a href="{nav_data["prev"]["file"]}" class="nav-btn prev">← {nav_data["prev"]["title"]}</a>'
    if nav_data['next']:
        next_link = f'<a href="{nav_data["next"]["file"]}" class="nav-btn next">{nav_data["next"]["title"]} →</a>'

    return f'''<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>{section['title']} - CS161A Interactive Text</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container">
        <header>
            <div class="breadcrumb">
                <a href="index.html">Home</a> /
                <span class="chapter">{escape(chapter_title)}</span>
            </div>
            <h1>{escape(section['title'])}</h1>
        </header>

        <main class="content">
            {content_html}
        </main>

        <nav class="page-nav">
            {prev_link}
            {next_link}
        </nav>
    </div>

    <!-- Terminal for running code -->
    <div id="terminal-overlay" class="hidden">
        <div class="terminal-container">
            <div class="terminal-header">
                <span>Program Output</span>
                <button id="close-terminal-btn">✕</button>
            </div>
            <div id="terminal-output"></div>
            <div id="input-area" class="hidden">
                <span class="prompt">→</span>
                <input type="text" id="user-input" autocomplete="off" placeholder="Enter input...">
            </div>
        </div>
    </div>

    <script src="https://cdnjs.cloudflare.com/ajax/libs/monaco-editor/0.48.0/min/vs/loader.min.js"></script>
    <script src="app.js"></script>
</body>
</html>
'''

def generate_index_html(chapters):
    """Generate table of contents page."""
    toc_html = []

    for chapter in chapters:
        # Skip meta chapters
        if 'meta' in chapter['title'].lower():
            continue

        toc_html.append(f'<div class="chapter-toc">')
        toc_html.append(f'<h2>{escape(chapter["title"])}</h2>')
        toc_html.append('<ul>')

        for i, section in enumerate(chapter['sections']):
            filename = f"page_{chapter['title'].replace(' ', '_')}_{i}.html"
            filename = re.sub(r'[^a-zA-Z0-9_.-]', '', filename)
            toc_html.append(f'<li><a href="{filename}">{escape(section["title"])}</a></li>')

        toc_html.append('</ul>')
        toc_html.append('</div>')

    return f'''<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CS161A Interactive Text - Table of Contents</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container">
        <header class="main-header">
            <h1>CS161A: Introduction to C++ Programming</h1>
            <p class="subtitle">An Interactive Textbook</p>
        </header>

        <main class="toc">
            {''.join(toc_html)}
        </main>
    </div>
</body>
</html>
'''

def generate_css():
    """Generate CSS stylesheet."""
    return '''/* CS161A Interactive Text Styles */

* {
    box-sizing: border-box;
}

body {
    margin: 0;
    padding: 0;
    font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, sans-serif;
    line-height: 1.6;
    color: #333;
    background: #f5f5f5;
}

.container {
    max-width: 900px;
    margin: 0 auto;
    padding: 20px;
    background: white;
    min-height: 100vh;
    box-shadow: 0 0 20px rgba(0,0,0,0.1);
}

/* Header */
header {
    border-bottom: 3px solid #007acc;
    margin-bottom: 30px;
    padding-bottom: 20px;
}

.main-header {
    text-align: center;
    padding: 40px 0;
}

.main-header h1 {
    font-size: 2.5em;
    margin: 0;
    color: #007acc;
}

.subtitle {
    font-size: 1.2em;
    color: #666;
    margin: 10px 0 0 0;
}

.breadcrumb {
    font-size: 0.9em;
    color: #666;
    margin-bottom: 10px;
}

.breadcrumb a {
    color: #007acc;
    text-decoration: none;
}

.breadcrumb a:hover {
    text-decoration: underline;
}

.chapter {
    color: #999;
}

h1 {
    font-size: 2em;
    margin: 0;
    color: #007acc;
}

/* Content */
.content {
    margin: 30px 0;
}

.content p {
    margin: 15px 0;
    text-align: justify;
}

.content h2, .content h3, .content h4 {
    margin-top: 30px;
    margin-bottom: 15px;
    color: #333;
}

.content h2 {
    font-size: 1.5em;
    border-bottom: 2px solid #eee;
    padding-bottom: 10px;
}

.content ul {
    margin: 15px 0;
    padding-left: 30px;
}

.content li {
    margin: 8px 0;
}

.content code {
    background: #f4f4f4;
    padding: 2px 6px;
    border-radius: 3px;
    font-family: 'Consolas', 'Monaco', monospace;
    font-size: 0.9em;
}

.content strong {
    color: #000;
}

/* Code Blocks */
.code-block {
    margin: 25px 0;
    border: 1px solid #ddd;
    border-radius: 6px;
    overflow: hidden;
    box-shadow: 0 2px 8px rgba(0,0,0,0.1);
}

.code-toolbar {
    background: #2d2d30;
    padding: 8px 12px;
    display: flex;
    gap: 10px;
}

.code-toolbar button {
    padding: 6px 12px;
    background: #007acc;
    color: white;
    border: none;
    border-radius: 3px;
    cursor: pointer;
    font-size: 13px;
    font-weight: 500;
}

.code-toolbar button:hover {
    background: #005a9e;
}

.code-editor {
    height: 400px;
    border-top: 1px solid #3e3e42;
}

/* Table of Contents */
.toc {
    padding: 20px 0;
}

.chapter-toc {
    margin-bottom: 40px;
}

.chapter-toc h2 {
    color: #007acc;
    border-bottom: 2px solid #007acc;
    padding-bottom: 10px;
}

.chapter-toc ul {
    list-style: none;
    padding: 0;
}

.chapter-toc li {
    margin: 12px 0;
}

.chapter-toc a {
    color: #333;
    text-decoration: none;
    font-size: 1.1em;
    display: block;
    padding: 8px 12px;
    border-left: 3px solid transparent;
    transition: all 0.2s;
}

.chapter-toc a:hover {
    background: #f0f0f0;
    border-left-color: #007acc;
    padding-left: 16px;
}

/* Navigation */
.page-nav {
    display: flex;
    justify-content: space-between;
    margin-top: 50px;
    padding-top: 30px;
    border-top: 2px solid #eee;
}

.nav-btn {
    padding: 12px 20px;
    background: #007acc;
    color: white;
    text-decoration: none;
    border-radius: 4px;
    font-weight: 500;
    transition: background 0.2s;
}

.nav-btn:hover {
    background: #005a9e;
}

.nav-btn.prev {
    margin-right: auto;
}

.nav-btn.next {
    margin-left: auto;
}

/* Terminal Overlay */
#terminal-overlay {
    position: fixed;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    background: rgba(0,0,0,0.8);
    display: flex;
    align-items: center;
    justify-content: center;
    z-index: 1000;
}

#terminal-overlay.hidden {
    display: none;
}

.terminal-container {
    width: 90%;
    max-width: 800px;
    height: 600px;
    background: #0c0c0c;
    border-radius: 6px;
    display: flex;
    flex-direction: column;
    box-shadow: 0 10px 40px rgba(0,0,0,0.5);
}

.terminal-header {
    background: #2d2d30;
    padding: 12px 15px;
    display: flex;
    justify-content: space-between;
    align-items: center;
    border-bottom: 1px solid #3e3e42;
}

.terminal-header span {
    color: #d4d4d4;
    font-weight: 500;
}

.terminal-header button {
    background: #f48771;
    color: white;
    border: none;
    width: 24px;
    height: 24px;
    border-radius: 50%;
    cursor: pointer;
    font-size: 14px;
}

.terminal-header button:hover {
    background: #d46959;
}

#terminal-output {
    flex: 1;
    padding: 15px;
    overflow-y: auto;
    font-family: 'Consolas', 'Monaco', monospace;
    font-size: 14px;
    color: #d4d4d4;
    line-height: 1.5;
}

.terminal-line {
    margin: 3px 0;
    white-space: pre-wrap;
}

.output { color: #d4d4d4; }
.input-echo { color: #4ec9b0; font-weight: 500; }
.error { color: #f48771; }
.info { color: #569cd6; }

#input-area {
    padding: 12px 15px;
    background: #1a1a1a;
    border-top: 1px solid #3e3e42;
    display: flex;
    align-items: center;
    gap: 10px;
}

#input-area.hidden {
    display: none;
}

.prompt {
    color: #4ec9b0;
    font-weight: bold;
}

#user-input {
    flex: 1;
    background: #0c0c0c;
    border: 1px solid #3e3e42;
    color: #4ec9b0;
    padding: 8px;
    font-family: 'Consolas', 'Monaco', monospace;
    font-size: 14px;
    border-radius: 3px;
}

#user-input:focus {
    outline: none;
    border-color: #007acc;
}
'''

def generate_app_js():
    """Generate JavaScript for Monaco and code execution."""
    return '''// CS161A Interactive Text - Application JavaScript

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
    const lines = text.split('\\n');
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
'''

def main():
    """Main generation function."""
    input_file = Path('text.org')
    output_dir = Path('website')

    print(f"Parsing {input_file}...")
    chapters = parse_org_file(input_file)

    print(f"Found {len(chapters)} chapters")

    # Create output directory
    output_dir.mkdir(exist_ok=True)

    # Generate index
    print("Generating index.html...")
    with open(output_dir / 'index.html', 'w') as f:
        f.write(generate_index_html(chapters))

    # Generate CSS
    print("Generating style.css...")
    with open(output_dir / 'style.css', 'w') as f:
        f.write(generate_css())

    # Generate JavaScript
    print("Generating app.js...")
    with open(output_dir / 'app.js', 'w') as f:
        f.write(generate_app_js())

    # Generate pages
    print("Generating pages...")
    all_pages = []

    for chapter in chapters:
        # Skip meta chapters
        if 'meta' in chapter['title'].lower():
            continue

        for i, section in enumerate(chapter['sections']):
            filename = f"page_{chapter['title'].replace(' ', '_')}_{i}.html"
            filename = re.sub(r'[^a-zA-Z0-9_.-]', '', filename)

            all_pages.append({
                'file': filename,
                'title': section['title'],
                'chapter': chapter['title'],
                'section': section
            })

    # Generate each page with navigation
    for idx, page_info in enumerate(all_pages):
        nav_data = {
            'prev': all_pages[idx - 1] if idx > 0 else None,
            'next': all_pages[idx + 1] if idx < len(all_pages) - 1 else None
        }

        html = generate_page_html(
            page_info['section'],
            f"page{idx}",
            page_info['chapter'],
            nav_data
        )

        with open(output_dir / page_info['file'], 'w') as f:
            f.write(html)

        print(f"  Generated {page_info['file']}")

    print(f"\\nWebsite generated in {output_dir}/")
    print(f"Total pages: {len(all_pages)}")
    print("\\nTo view:")
    print(f"  cd {output_dir}")
    print("  python3 -m http.server 8000")
    print("  Open http://localhost:8000/")

if __name__ == '__main__':
    main()
