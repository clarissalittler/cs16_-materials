# Troubleshooting the Interactive Website

## Quick Fixes

### Monaco Editors Not Showing

**Symptom:** Empty boxes where code should be

**Fixes:**
1. Open browser console (F12) and check for errors
2. Make sure you're viewing via HTTP server (not `file://`)
3. Check that Monaco CDN is accessible
4. Wait a few seconds - Monaco takes time to load

**Test:** Open `test.html` to see if Monaco loads at all

### Code Won't Run

**Symptom:** "Compiler not available" error

**This is expected!** The compiler needs the `test1/assets/` directory.

**Fix:**
```bash
# Option 1: Copy assets into website
cp -r ../../test1/assets website/

# Then edit app.js line ~69:
script.src = 'assets/shared.js';  # Change from '../test1/assets/shared.js'
```

**Or:** Just use the editors for editing, not running. Students can copy code to compile locally.

### Buttons Do Nothing

**Symptom:** Click Run/Reset, nothing happens

**Fixes:**
1. Open console (F12) - look for JavaScript errors
2. Check that `app.js` is loading (Network tab in dev tools)
3. Make sure editors have initialized (console should say "Created editor: ...")

**Debug command:**
Open console and type:
```javascript
Object.keys(window.codeBlocks)  // Should list all editor IDs
Object.keys(window.editors)      // Should match codeBlocks
```

## Common Issues

### Issue: Monaco loader not found

**Error in console:** `require is not defined`

**Cause:** Monaco loader script not loaded yet

**Fix:** Already fixed in updated `app.js` - it retries until loaded

### Issue: Editor IDs mismatch

**Error:** `Element not found for editor: editor-pageX-Y`

**Cause:** Editor ID in HTML doesn't match the ID in codeBlocks

**Fix:** Regenerate website with `python3 generate_website.py`

### Issue: Input field always visible

**Error:** Input box shows even when not needed

**Cause:** Bug in `hideInput()` function

**Fix:** Already fixed - `hideInput()` now adds 'hidden' class, not removes it

## Browser Console Checks

Open dev tools (F12) and look for these messages:

**Good signs:**
```
Monaco loaded. Creating editors for: [...]
Created editor: editor-page6-0
Created editor: editor-page6-1
wasm-clang loaded
Compiler ready
```

**Bad signs:**
```
Failed to load Monaco: [error]
Element not found for editor: [id]
Compiler not available
```

## File Structure Check

Make sure these files exist:

```bash
cd website
ls -la

# Should see:
# - index.html
# - page_*.html (many files)
# - style.css
# - app.js
# - test.html (optional, for testing)
```

## Viewing the Website

**✅ Correct way:**
```bash
cd website
python3 -m http.server 8000
# Open http://localhost:8000/
```

**❌ Wrong way:**
```bash
# Don't do this:
open index.html  # file:// URLs don't work well with Monaco
```

## Testing Steps

1. **Test Monaco loading:**
   - Open `test.html`
   - Should see a code editor with Hello World
   - Console should show "Monaco loaded"

2. **Test a content page:**
   - Open `page_Your_First_Programs_1.html`
   - Should see multiple code editors
   - Console should show multiple "Created editor" messages

3. **Test navigation:**
   - Click "Next" button
   - Should go to next page
   - Check URL changed

4. **Test editing:**
   - Type in a Monaco editor
   - Code should update
   - Reset button should restore original

5. **Test running (if compiler available):**
   - Click Run button
   - Terminal overlay should appear
   - Check console for compiler messages

## Known Limitations

### 1. Compiler requires assets

The `test1/assets/` directory is **not** included in the generated website.

**Options:**
- Copy it: `cp -r ../../test1/assets website/`
- Update path in `app.js`
- Or just disable running (editing still works!)

### 2. Monaco is large

Monaco CDN files are several MB. First load will be slow.

**Solution:** Cache will help on subsequent loads

### 3. Code execution doesn't truly block on input

This uses the basic test1/ approach. For true blocking, see `BLOCKING_STDIN_INVESTIGATION.md`.

## Advanced Debugging

### Check codeBlocks registration

Each code block should register itself. In console:

```javascript
// See all registered code blocks
console.log(window.codeBlocks);

// Check specific one
console.log(codeBlocks['editor-page6-0']);
```

### Check editor creation

```javascript
// See all created editors
console.log(window.editors);

// Check specific one
console.log(editors['editor-page6-0']);
```

### Force Monaco reload

```javascript
// In console
location.reload(true);  // Hard reload
```

### Check Monaco version

```javascript
// After Monaco loads
console.log(monaco.version);  // Should show version number
```

## Regenerating the Website

If things are really broken, regenerate:

```bash
cd /home/left_adjoint/test/cs16_-materials/cs161A
rm -rf website/  # Delete old version
python3 generate_website.py  # Generate fresh
cd website
python3 -m http.server 8000
```

## Getting Help

1. **Check console** - Most issues show errors there
2. **Try test.html** - Isolates Monaco from content issues
3. **Check file paths** - Make sure CSS/JS are loading
4. **Regenerate** - When in doubt, regenerate from scratch

## Success Checklist

When working correctly, you should see:

- ✅ Code editors render with syntax highlighting
- ✅ Can type and edit code
- ✅ Reset button restores original
- ✅ Run button opens terminal (even if compiler unavailable)
- ✅ Navigation buttons work
- ✅ No console errors (except maybe compiler warning)
- ✅ Page loads in reasonable time

If all these work, you're good! 🎉
