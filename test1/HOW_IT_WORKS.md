# How the In-Browser C++ Playground Works

This document explains in detail how this web-based C++ compiler and runtime works, breaking down the JavaScript, WebAssembly, and browser APIs involved.

## Table of Contents
1. [High-Level Architecture](#high-level-architecture)
2. [The Monaco Editor](#the-monaco-editor)
3. [WebAssembly Basics](#webassembly-basics)
4. [The Compilation Pipeline](#the-compilation-pipeline)
5. [File System Virtualization](#file-system-virtualization)
6. [WASI Runtime](#wasi-runtime)
7. [Step-by-Step Execution Flow](#step-by-step-execution-flow)
8. [Key Technologies Explained](#key-technologies-explained)

## High-Level Architecture

The playground consists of several key components:

```
┌─────────────────┐     ┌──────────────────┐     ┌─────────────────┐
│  Monaco Editor  │────▶│ Clang (WASM)     │────▶│ LLD (WASM)      │
│  (User's C++)   │     │ Compiles to .o   │     │ Links to .wasm  │
└─────────────────┘     └──────────────────┘     └─────────────────┘
                                                           │
                                                           ▼
┌─────────────────┐     ┌──────────────────┐     ┌─────────────────┐
│   Browser UI    │◀────│  WASI Runtime    │◀────│ Your .wasm file │
│  (Output text)  │     │ Executes binary  │     │ (Compiled C++)  │
└─────────────────┘     └──────────────────┘     └─────────────────┘
```

## The Monaco Editor

Monaco is Microsoft's browser-based code editor (the same engine that powers VS Code). Here's how it's loaded:

### 1. Script Loading (index.html)
```html
<script src="https://cdnjs.cloudflare.com/ajax/libs/monaco-editor/0.48.0/min/vs/loader.min.js"></script>
```
This loads Monaco's AMD (Asynchronous Module Definition) loader. AMD is an older JavaScript module system that predates ES6 modules.

### 2. AMD Configuration (app.js)
```javascript
window.require.config({ 
  paths: { 'vs': 'https://cdnjs.cloudflare.com/ajax/libs/monaco-editor/0.48.0/min/vs' }
});
```
This tells the AMD loader where to find Monaco's files.

### 3. Loading Monaco Modules
```javascript
window.require(['vs/editor/editor.main'], () => {
  // Monaco is now loaded
});
```
The AMD loader fetches all necessary Monaco files (syntax highlighting, editor logic, etc.)

### 4. Creating the Editor Instance
```javascript
editor = monaco.editor.create(document.getElementById('editor'), {
  value: `#include <iostream>\n...`,
  language: 'cpp',
  theme: 'vs-dark'
});
```

## WebAssembly Basics

WebAssembly (WASM) is a binary instruction format that runs in browsers. Think of it as a portable assembly language.

### Key Concepts:

1. **WASM Modules**: Binary files containing compiled code
2. **WASM Instances**: Running instances of modules with their own memory
3. **Imports/Exports**: How WASM communicates with JavaScript
4. **Linear Memory**: A contiguous array of bytes that WASM can read/write

### Loading a WASM Module:
```javascript
// Fetch and compile the WASM binary
const response = await fetch('program.wasm');
const bytes = await response.arrayBuffer();
const module = await WebAssembly.compile(bytes);

// Instantiate with imports
const instance = await WebAssembly.instantiate(module, {
  imports: { /* ... */ }
});
```

## The Compilation Pipeline

Here's where it gets interesting - we're running a C++ compiler (Clang) that's been compiled to WebAssembly!

### 1. Clang and LLD as WASM

The `assets/clang` and `assets/lld` files are actually WebAssembly binaries:
- **Clang**: The C++ compiler, compiled from C++ to WASM
- **LLD**: The linker, also compiled to WASM

This is meta: we're using a compiler that was compiled to run in the browser!

### 2. The Virtual File System (MemFS)

Since Clang expects to read/write files, we need a file system. `MemFS` provides this:

```javascript
class MemFS {
  constructor() {
    this.files = {};  // In-memory storage
  }
  
  addFile(path, contents) {
    this.files[path] = contents;
  }
  
  getFileContents(path) {
    return this.files[path];
  }
}
```

The actual implementation is more complex, involving:
- A WASM module (`memfs`) that provides POSIX-like file operations
- Mappings between JavaScript strings and WASM memory

### 3. The Sysroot

The `sysroot.tar` file contains:
- C++ standard library headers (`<iostream>`, `<vector>`, etc.)
- Compiled standard libraries (`libc++.a`, `libc.a`)
- Runtime files needed for WASM execution

This is extracted into the virtual file system before compilation.

## WASI Runtime

WASI (WebAssembly System Interface) is a standard for how WASM programs interact with the outside world.

### What WASI Provides:

1. **File I/O**: Read/write files (virtualized in our case)
2. **Console I/O**: stdin/stdout/stderr
3. **Environment**: Arguments, environment variables
4. **Time**: Clock functions
5. **Random**: Random number generation

### WASI in Our Context:

When your C++ program calls `std::cout << "Hello"`, here's what happens:

1. C++ standard library calls WASI's `fd_write` function
2. WASI runtime (in JavaScript) receives this call
3. JavaScript appends the text to the output div

```javascript
const wasi = new WASI({
  stdout: (text) => {
    document.getElementById('out').textContent += text;
  }
});
```

## Step-by-Step Execution Flow

Let's trace what happens when you click "Compile & Run":

### 1. Get User's Code
```javascript
const code = editor.getValue();  // Get C++ source from Monaco
```

### 2. Write to Virtual FS
```javascript
api.memfs.addFile('test.cc', code);
```

### 3. Run Clang Compiler
```javascript
await api.run(clangModule, 'clang', '-cc1', '-emit-obj', 
              '-o', 'test.o', 'test.cc');
```

This:
- Instantiates the Clang WASM module
- Runs it with command-line arguments
- Clang reads `test.cc` from virtual FS
- Outputs `test.o` (object file) to virtual FS

### 4. Run LLD Linker
```javascript
await api.run(lldModule, 'wasm-ld', 'test.o', 
              '-lc++', '-o', 'test.wasm');
```

This:
- Links the object file with the C++ standard library
- Produces `test.wasm` - your program compiled to WebAssembly

### 5. Execute Your Program
```javascript
const buffer = memfs.getFileContents('test.wasm');
const module = await WebAssembly.compile(buffer);
const instance = await WebAssembly.instantiate(module, {
  wasi_snapshot_preview1: wasi.exports
});
wasi.start(instance);
```

## Key Technologies Explained

### ES6 Modules vs Script Loading

**ES6 Modules** (what we tried first):
```javascript
import { Something } from './module.js';
```
- Modern JavaScript module system
- Isolated scope
- Explicit imports/exports
- Loaded with `<script type="module">`

**Script Loading** (what we ended up using):
```javascript
const script = document.createElement('script');
script.src = 'shared.js';
document.head.appendChild(script);
```
- Traditional way of loading JavaScript
- Adds to global scope
- Why we needed this: `shared.js` wasn't written as an ES6 module

### Promises and Async/Await

JavaScript's asynchronous programming model:

```javascript
// Promise creation
const promise = new Promise((resolve, reject) => {
  setTimeout(() => resolve('done'), 1000);
});

// Async/await usage
async function doWork() {
  const result = await promise;  // Waits for promise
  console.log(result);
}
```

In our code:
- Loading scripts returns promises
- WASM compilation is asynchronous
- File fetching is asynchronous

### The JavaScript Event Loop

JavaScript is single-threaded but non-blocking:

1. **Synchronous code** runs immediately
2. **Asynchronous operations** (fetch, setTimeout) are handled by browser APIs
3. **Callbacks** are queued and executed when the stack is empty

This is why we need promises/async for:
- Fetching WASM files
- Compiling WASM modules
- Waiting for scripts to load

### Memory Management

WebAssembly has linear memory - a big `ArrayBuffer`:

```javascript
// WASM sees memory as array of bytes
const memory = new WebAssembly.Memory({ initial: 256 });
const bytes = new Uint8Array(memory.buffer);
```

When Clang runs:
1. It allocates memory for compiling
2. Reads source files from virtual FS into memory
3. Writes output to memory
4. Virtual FS extracts the result

### Why This All Works

The magic is that WebAssembly provides a sandboxed, portable execution environment. By compiling Clang and LLD to WebAssembly, we get:

1. **Portability**: Runs in any modern browser
2. **Security**: Sandboxed execution
3. **Performance**: Near-native speed
4. **Compatibility**: Full C++ compiler, not a subset

The virtual file system and WASI runtime provide the OS-like environment these tools expect, all running in your browser tab!

## Common Gotchas

1. **CORS**: Scripts must be served from a web server, not `file://`
2. **Memory Limits**: Browsers limit WASM memory (usually 2-4GB)
3. **No Threads**: Browser WASM doesn't support pthreads by default
4. **No Network**: WASI doesn't provide network access
5. **Performance**: First compilation is slow (downloading/initializing)

## Summary

This playground demonstrates several cutting-edge web technologies:
- Running a full C++ toolchain in the browser
- Virtual file systems in JavaScript
- WASI for system interface standardization
- Modern JavaScript module loading and async patterns

The fact that we can compile and run C++ entirely client-side, with no server involvement, showcases how powerful modern web browsers have become. The browser is essentially acting as a mini operating system, complete with process execution, file systems, and system calls!