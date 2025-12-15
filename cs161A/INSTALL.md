# CS161A Interactive Website - Installation Guide

This guide walks you through setting up the CS161A interactive C++ learning environment from scratch. After following these steps, you'll have a fully functional web-based C++ playground running locally.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Quick Install (Script)](#quick-install-script)
- [Manual Installation](#manual-installation)
- [Verification](#verification)
- [Running the Website](#running-the-website)
- [Troubleshooting](#troubleshooting)
- [Updating](#updating)

## Prerequisites

### Required Software

| Software | Minimum Version | Check Command | Purpose |
|----------|-----------------|---------------|---------|
| **Python** | 3.6+ | `python3 --version` | Website generator, local server |
| **Git** | Any recent | `git --version` | Cloning wasm-clang assets |
| **Web Browser** | Modern (Chrome, Firefox, Edge, Safari) | - | Viewing/using the website |

### System Requirements

- **Disk Space**: ~100MB (60MB for wasm-clang, 40MB for generated site)
- **RAM**: 4GB+ recommended (WebAssembly compilation needs memory)
- **Network**: Required for initial setup (downloading assets)

### Verify Prerequisites

```bash
# Run these commands to verify your system is ready
python3 --version    # Should be 3.6 or higher
git --version        # Should show any recent version
```

## Quick Install (Script)

The fastest way to get everything set up:

```bash
cd cs161A
./install.sh
```

The script will:
1. Download the wasm-clang WebAssembly compiler (~60MB)
2. Copy assets to the website directory
3. Generate the website from `text.org`
4. Provide instructions for starting the server

**Note**: If `install.sh` is not executable, run: `chmod +x install.sh`

## Manual Installation

If you prefer to do things step-by-step or the script doesn't work, follow these instructions:

### Step 1: Download wasm-clang Assets

The website needs the wasm-clang toolchain to compile and run C++ code in the browser. These assets are ~60MB and not included in the repository.

```bash
# Navigate to the test1 directory
cd test1

# Clone the wasm-clang repository into an 'assets' folder
# Using --depth=1 keeps the download small (~60MB instead of full history)
git clone --depth=1 https://github.com/binji/wasm-clang assets

# Return to cs161A directory
cd ../cs161A
```

**What this downloads:**
- `clang` - The Clang C++ compiler compiled to WebAssembly
- `lld` - The LLVM linker compiled to WebAssembly
- `sysroot.tar` - C++ standard library headers and compiled libraries
- `memfs` - Virtual file system for browser
- `shared.js` - JavaScript API for the compiler

### Step 2: Copy Assets to Website Directory

The website expects the compiler assets in its own `assets/` subdirectory:

```bash
cd cs161A

# Create website/assets directory if it doesn't exist
mkdir -p website/assets

# Copy all assets (excluding git metadata)
rsync -av --exclude='.git' ../test1/assets/ website/assets/
```

**Alternative without rsync:**
```bash
cp -r ../test1/assets/* website/assets/
rm -rf website/assets/.git  # Remove git metadata if copied
```

### Step 3: Generate the Website

The website is generated from `text.org` (the source content in Emacs org-mode format):

```bash
cd cs161A
python3 generate_website.py
```

This creates/updates the `website/` directory with:
- `index.html` - Table of contents
- `page_*.html` - Individual content pages (36 pages)
- `style.css` - Stylesheet
- `app.js` - Monaco editor and code execution logic

**Note**: This does NOT overwrite `website/assets/` - your compiler files stay intact.

### Step 4: Verify Installation

Check that everything is in place:

```bash
# Check assets were copied
ls -la website/assets/
# Should show: clang, lld, memfs, sysroot.tar, shared.js, etc.

# Check website was generated
ls website/*.html | wc -l
# Should show 37 (index.html + 36 page files)
```

## Verification

Run the verification script to check your installation:

```bash
cd cs161A
./verify_install.sh
```

Or manually check these items:

| Check | Expected Result |
|-------|-----------------|
| `ls website/assets/shared.js` | File exists |
| `ls website/assets/clang` | File exists |
| `ls website/assets/sysroot.tar` | File exists |
| `ls website/index.html` | File exists |
| `ls website/app.js` | File exists |

## Running the Website

### Start the Local Server

**IMPORTANT**: You MUST use an HTTP server. Opening HTML files directly (`file://`) will NOT work because Monaco editor requires proper CORS headers.

```bash
cd cs161A/website
python3 -m http.server 8000
```

### Access the Website

Open your web browser and navigate to:
```
http://localhost:8000/
```

You should see the CS161A course table of contents. Click any section to view content and try the interactive C++ code editors.

### Test Code Execution

1. Navigate to any page with code examples
2. You should see code in Monaco editors with syntax highlighting
3. Click the **"▶ Run Code"** button
4. The first run will be slow (loading ~50MB of compiler assets)
5. Output appears in the terminal overlay

## Troubleshooting

### Problem: "Compiler not available" error

**Cause**: The wasm-clang assets are missing or in the wrong location.

**Solution**:
```bash
# Verify assets exist
ls -la website/assets/shared.js

# If missing, re-copy from test1
rsync -av --exclude='.git' ../test1/assets/ website/assets/

# If test1/assets doesn't exist, download it
cd ../test1
git clone --depth=1 https://github.com/binji/wasm-clang assets
cd ../cs161A
rsync -av --exclude='.git' ../test1/assets/ website/assets/
```

### Problem: Blank code editors (Monaco won't load)

**Cause**: Usually a network or CORS issue.

**Solutions**:
1. Ensure you're using `http://localhost:8000/` not `file://`
2. Check browser console (F12) for errors
3. Verify internet connection (Monaco loads from CDN)
4. Try a different browser
5. Clear browser cache

### Problem: "ERR_CONNECTION_REFUSED" when accessing localhost

**Cause**: Server isn't running.

**Solution**:
```bash
# Make sure you're in the website directory
cd cs161A/website

# Start the server
python3 -m http.server 8000

# Keep this terminal open while using the website
```

### Problem: Port 8000 already in use

**Solution**: Use a different port:
```bash
python3 -m http.server 8080
# Then access http://localhost:8080/
```

### Problem: First compilation is very slow

**Cause**: Normal behavior. The browser downloads ~50MB of compiler assets on first use.

**Solution**: Just wait. Subsequent compilations will be much faster (assets are cached).

### Problem: Input (cin) doesn't work properly

**Known Limitation**: The current implementation doesn't support true blocking input like native C++. When a program needs input:
1. A prompt will appear
2. Enter your input and press Enter
3. The program continues

For programs requiring multiple inputs, you may need to provide all inputs at once, separated by newlines.

### Problem: Website looks wrong / styles missing

**Solution**:
```bash
# Regenerate the website
cd cs161A
python3 generate_website.py

# Verify style.css exists
ls -la website/style.css
```

## Updating

### After Editing text.org

If you modify the source content:

```bash
cd cs161A
python3 generate_website.py
# Refresh browser to see changes
```

### Updating wasm-clang

To get the latest version of the compiler:

```bash
cd test1/assets
git pull origin main

cd ../../cs161A
rsync -av --exclude='.git' ../test1/assets/ website/assets/
```

## Directory Structure Reference

After successful installation:

```
cs16_-materials/
├── test1/
│   ├── assets/           # Downloaded wasm-clang (source)
│   │   ├── clang         # C++ compiler (WASM)
│   │   ├── lld           # Linker (WASM)
│   │   ├── sysroot.tar   # Standard library
│   │   ├── shared.js     # JavaScript API
│   │   └── ...
│   └── ...
│
└── cs161A/
    ├── text.org          # Source content (org-mode)
    ├── generate_website.py
    ├── INSTALL.md        # This file
    ├── install.sh        # Installation script
    └── website/          # Generated website
        ├── assets/       # Copied wasm-clang
        ├── index.html    # Table of contents
        ├── page_*.html   # Content pages
        ├── style.css     # Styling
        └── app.js        # Monaco + execution
```

## Getting Help

- **Website generation issues**: See `README_WEBSITE.md`
- **Code execution problems**: See `website/TROUBLESHOOTING.md`
- **Understanding the tech**: See `../test1/HOW_IT_WORKS.md`
- **Autograder setup**: See `autograder/README.md`

## Quick Reference

```bash
# Full setup from scratch
cd test1 && git clone --depth=1 https://github.com/binji/wasm-clang assets && cd ../cs161A
rsync -av --exclude='.git' ../test1/assets/ website/assets/
python3 generate_website.py
cd website && python3 -m http.server 8000
# Open http://localhost:8000/

# Regenerate website after editing
python3 generate_website.py

# Start server (from cs161A/website/)
python3 -m http.server 8000
```
