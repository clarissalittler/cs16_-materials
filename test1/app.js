// Load the shared API script
const scriptPromise = new Promise((resolve) => {
  const script = document.createElement('script');
  script.src = 'assets/shared.js';
  script.onload = resolve;
  document.head.appendChild(script);
}); 

// Global variable to hold editor instance
let editor;

/* ---------- 1.  spin up Monaco ---------- */
// Wait for Monaco loader to be ready
const monacoLoaded = new Promise((resolve) => {
  const checkRequire = () => {
    if (typeof window.require !== 'undefined') {
      resolve();
    } else {
      setTimeout(checkRequire, 50);
    }
  };
  checkRequire();
});

monacoLoaded.then(() => {
  window.require.config({ 
    paths: { 'vs': 'https://cdnjs.cloudflare.com/ajax/libs/monaco-editor/0.48.0/min/vs' }
  });
  
  window.require(['vs/editor/editor.main'], () => {
    editor = monaco.editor.create(document.getElementById('editor'), {
      value: `#include <iostream>
int main() {
  std::cout << "Hello from C++!\\n";
  return 0;
}`,
      language: 'cpp',
      theme: 'vs-dark',
      minimap: { enabled: false },
      automaticLayout: true
    });
  });
});

/* ---------- 2.  Initialize API ---------- */
let api;
const apiPromise = scriptPromise.then(async () => {
  // Initialize API with options
  api = new API({
    async readBuffer(filename) {
      const response = await fetch(`assets/${filename}`);
      return response.arrayBuffer();
    },
    async compileStreaming(filename) {
      const response = await fetch(`assets/${filename}`);
      return WebAssembly.compile(await response.arrayBuffer());
    },
    hostWrite(s) {
      document.getElementById('out').textContent += s;
    }
  });
  
  await api.ready;
  return api;
});

/* ---------- 3.  button behaviour ---------- */
document.getElementById('run').onclick = async () => {
  if (!editor) {
    document.getElementById('out').textContent = 'Editor not ready yet...';
    return;
  }
  
  document.getElementById('out').textContent = 'Compiling...\n';
  
  try {
    const code = editor.getValue();
    document.getElementById('out').textContent = '';  // Clear output
    
    // Wait for API to be ready
    await apiPromise;
    
    // Compile and run the code
    const app = await api.compileLinkRun(code);
    
    if (!app) {
      document.getElementById('out').textContent += '\nProgram finished.';
    }
  } catch (err) {
    document.getElementById('out').textContent = 'Error: ' + err.message;
  }
};
