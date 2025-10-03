# CS161A Interactive Website Generator

This script converts `text.org` into an interactive website with Monaco editor integration for all C++ code examples.

## Features

✅ **Multi-page website** - Each `** heading` becomes its own page
✅ **Monaco editor** - All C++ code blocks are editable in browser
✅ **Run code** - Compile and execute C++ directly in browser (using wasm-clang from test1/)
✅ **Navigation** - Previous/Next buttons between pages
✅ **Table of Contents** - Clean index page
✅ **Pre-buffered input** - Students can provide inputs before running

## Quick Start

### First-Time Setup

**Important:** The website needs compiler assets to run C++ code in the browser. These are NOT included in git (they're ~60MB).

```bash
# Copy compiler assets from test1/
cd cs161A
rsync -av --exclude='.git' ../test1/assets/ website/assets/
```

This only needs to be done once after cloning the repository.

### Generate the Website

```bash
cd cs161A
python3 generate_website.py
```

This creates/updates `website/` directory with:
- `index.html` - Table of contents
- `page_*.html` - Individual pages for each section (36 pages)
- `style.css` - Stylesheet
- `app.js` - JavaScript for Monaco and code execution

**Note:** The generator will NOT overwrite `website/assets/` - that stays in place.

### View the Website

```bash
cd website
python3 -m http.server 8000
# Open http://localhost:8000/
```

**Important:** You MUST use an HTTP server (not `file://` URLs). Monaco editor requires proper CORS headers.

## How It Works

### Parsing

The script parses `text.org` and converts:

**Org-mode structure:**
```
* Chapter Title
** Section Title
Content here...

#+begin_src cpp
#include <iostream>
int main() {
    std::cout << "Hello!\\n";
}
#+end_src
```

**Into:**
- One page per `** Section`
- Monaco editor for each `#+begin_src cpp` block
- HTML content from org markup

### Code Execution

Each code block gets:
1. **Monaco editor** - Syntax highlighting, editing
2. **Run button** - Compiles and executes code
3. **Reset button** - Restores original code

**Backend:** Uses wasm-clang from `../test1/assets/` to compile C++ in the browser.

### Input Handling

For programs that need input (cin, getline), there will be an input prompt that appears in the terminal overlay.

**Note:** Currently uses the basic approach from test1/ where input doesn't truly block. For fully working blocking input, you'd need to implement the pre-buffer or SharedArrayBuffer approaches discussed in BLOCKING_STDIN_INVESTIGATION.md.

## File Structure

```
cs161A/
├── text.org                    # Source org file
├── generate_website.py         # This script
└── website/                    # Generated output
    ├── index.html              # Table of contents
    ├── page_*.html             # Content pages
    ├── style.css               # Styling
    └── app.js                  # Monaco + execution logic
```

## Customization

### Styling

Edit the CSS in `generate_css()` function in the script, or modify `website/style.css` after generation.

### Code Execution

The `app.js` file handles Monaco setup and code execution. Key functions:
- `runCode(editorId)` - Compiles and runs code
- `resetCode(editorId)` - Resets to original
- Terminal overlay for output

### Navigation

Each page has:
- Breadcrumb (Home / Chapter)
- Previous/Next buttons
- Link back to table of contents

## Dependencies

### Required
- Python 3.6+
- Modern web browser (for Monaco and WebAssembly)

### Optional (for code execution)
- `../test1/assets/` - wasm-clang toolchain
  - If not available, code can still be edited but not run

## Deployment

### GitHub Pages

The generated website can be deployed to GitHub Pages:

```bash
# After generating website
cd website
git init
git add .
git commit -m "Initial website"
git remote add origin <your-repo>
git push -u origin main
```

Then enable GitHub Pages in repository settings.

### Other Hosting

Any static hosting works:
- Netlify
- Vercel
- Cloudflare Pages
- S3 + CloudFront

Just upload the `website/` directory contents.

## Known Limitations

### 1. Input Doesn't Block

Programs using `cin` or `getline()` show an input field but don't truly block like native C++.

**Workaround options:**
- Pre-buffer input (add input fields before running)
- Use Emscripten approach (see `../test1-emscripten/`)
- Implement SharedArrayBuffer solution (see `../test1-asyncify/`)

### 2. Requires wasm-clang Assets

For code execution to work, the website needs access to `../test1/assets/`.

**Solutions:**
- Copy `test1/assets/` into `website/assets/`
- Update paths in `app.js`
- Or document that students should clone the full repo

### 3. Large File Loads

The wasm-clang toolchain is ~50MB. First load will be slow.

**Optimization:**
- Use CDN for common assets
- Implement lazy loading
- Cache compilation results

## Regeneration

To update the website after editing `text.org`:

```bash
python3 generate_website.py
```

This will overwrite the `website/` directory. Any manual changes to generated files will be lost.

**Tip:** Keep customizations in the script, not in generated files.

## Troubleshooting

### Code won't run

**Error:** "Compiler not available"

**Fix:** Ensure `../test1/assets/` exists or update path in `app.js`:
```javascript
script.src = '../test1/assets/shared.js';
// Change to wherever assets are located
```

### Monaco won't load

**Error:** Blank editor boxes

**Fix:** Check browser console. Monaco requires:
- Modern browser
- JavaScript enabled
- CDN access (or local Monaco copy)

### Styling looks wrong

**Fix:** Check that `style.css` loaded:
- View source
- Look for `<link rel="stylesheet" href="style.css">`
- Verify file exists in same directory

### Navigation broken

**Issue:** Prev/Next buttons go to wrong pages

**Fix:** Page ordering is based on org file structure. Check:
- Proper `** heading` hierarchy
- No duplicate section titles
- Regenerate website

## Advanced Usage

### Adding Features

Edit `generate_website.py` to add:

**Quizzes:**
```python
def org_to_html(content):
    # Add quiz block detection
    if '#+begin_quiz' in content:
        return generate_quiz(...)
```

**Solutions toggle:**
```python
# In HTML generation
if 'solution' in section['title'].lower():
    return f'<div class="solution hidden">...</div>'
```

**Progress tracking:**
```javascript
// In app.js
localStorage.setItem('completed', pageId);
```

### Multiple Org Files

To generate from multiple org files:

```python
# In main()
for org_file in ['text.org', 'advanced.org']:
    chapters += parse_org_file(org_file)
```

### Custom Templates

Create template HTML files and use them instead of generating strings:

```python
from jinja2 import Template

template = Template(open('page_template.html').read())
html = template.render(section=section, nav=nav_data)
```

## Examples

### Generated Page Structure

```html
<!DOCTYPE html>
<html>
<head>
    <title>Why C++? - CS161A</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container">
        <header>
            <div class="breadcrumb">
                <a href="index.html">Home</a> / Introduction
            </div>
            <h1>Why C++?</h1>
        </header>

        <main class="content">
            <p>C++ is a fascinating old-ish language...</p>

            <div class="code-block">
                <div class="code-toolbar">
                    <button onclick="runCode('editor-0')">▶ Run</button>
                    <button onclick="resetCode('editor-0')">↻ Reset</button>
                </div>
                <div id="editor-0" class="code-editor"></div>
            </div>
        </main>

        <nav class="page-nav">
            <a href="page_Introduction_0.html">← Introduction</a>
            <a href="page_Introduction_2.html">High-level Perspective →</a>
        </nav>
    </div>

    <script src="app.js"></script>
</body>
</html>
```

## Contributing

To improve the generator:

1. Edit `generate_website.py`
2. Test with `python3 generate_website.py`
3. Check generated output in `website/`
4. Commit changes to the script (not generated files)

## License

Same as the rest of the cs16_-materials repository. See top-level LICENSE file.

## Credits

- Org-mode parser: Custom (simple regex-based)
- Monaco Editor: Microsoft
- wasm-clang: Ben Smith (@binji)
- C++ compilation in browser: WebAssembly community

---

**Questions?** See:
- `../BLOCKING_STDIN_INVESTIGATION.md` - For stdin handling details
- `../COMPARISON.md` - For architecture comparison
- `../test1/` - For wasm-clang setup
