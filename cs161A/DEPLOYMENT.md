# Deploying the CS161A Interactive Textbook

This guide is for faculty who want to put the interactive CS161A text on a
web server so students can read it and run C++ code directly in their
browser. No programming knowledge beyond copy-pasting shell commands is
assumed, and no special server software is required — the site is plain
static files.

## What you are deploying

The `website/` directory is a fully self-contained static website:

- **56 content pages** generated from `text.org` (one page per section)
- **Monaco code editors** (the editor from VS Code) for every code example,
  loaded from a CDN
- **An in-browser C++ compiler** (clang compiled to WebAssembly) so students
  can press "Run Code" without installing anything — this lives in
  `website/assets/` (~58 MB) and is downloaded separately, one time

There is no backend, no database, and no login. Any web server that can
serve files can host this — a department Apache server, your `public_html`,
GitHub Pages, Netlify, etc.

## One-time setup

You need: `git`, `python3`, and (only if you plan to edit the textbook
source) `emacs` for re-tangling code examples.

### 1. Get the repository

```bash
git clone <this-repository-url>
cd cs16_-materials/cs161A
```

### 2. Download the in-browser compiler assets

The compiler toolchain is ~58 MB, so it is **not stored in this repository**
(`website/assets/` is in `.gitignore`). Download it once:

```bash
git clone --depth=1 https://github.com/binji/wasm-clang website/assets
rm -rf website/assets/.git    # saves ~16 MB; the history isn't needed
```

This step has been verified end-to-end: with these files in place, the
"Run Code" button compiles and runs student-editable C++ entirely in the
browser (first compile takes a few seconds while clang.wasm loads).

If you skip this step the site still works — students can read everything
and edit code in the editors — but pressing "Run Code" shows a friendly
"compiler not available" message instead of running the program.

### 3. Generate the website

```bash
python3 generate_website.py
```

This parses `text.org` and rebuilds `index.html`, all `page_*.html` files,
`style.css`, and `app.js` inside `website/`. It deletes and regenerates
those files each run, but **preserves** `website/assets/` and
`website/TROUBLESHOOTING.md`. Never hand-edit the generated files; edit
`text.org` or `generate_website.py` and regenerate.

### 4. Preview locally before publishing

```bash
cd website
python3 -m http.server 8000
# open http://localhost:8000/ in a browser
```

**You must use an HTTP server, not `file://` URLs** — the Monaco editor and
the WebAssembly compiler both refuse to load from bare files. This is true
on the real server too, but any normal web server already satisfies it.

## Publishing to a web server

### Option A: department / college web server (Apache, nginx, etc.)

Copy the `website/` directory to wherever the server serves files from:

```bash
rsync -av website/ yourlogin@server.college.edu:/path/to/webroot/cs161a/
```

Requirements on the server (almost always already true):

1. **Serve `.wasm` files with the MIME type `application/wasm`.**
   Modern Apache and nginx do this out of the box. If "Run Code" fails
   with a WebAssembly MIME error in the browser console, add:
   - Apache (`.htaccess` or config): `AddType application/wasm .wasm`
   - nginx (`mime.types` usually has it): `application/wasm wasm;`
2. **HTTPS is recommended** (students on campus wifi, browser features).
   Nothing in the site requires special headers, cookies, or server-side
   code.
3. About 60 MB of disk (assets) plus ~1 MB for the pages themselves.

### Option B: GitHub Pages

```bash
cd website
git init && git add . && git commit -m "CS161A interactive text"
git branch -M main
git remote add origin git@github.com:you/cs161a-text.git
git push -u origin main
```

Then in the GitHub repository settings, enable Pages from the `main`
branch. Note the 58 MB of compiler assets are fine for Pages (the limit is
1 GB per site), but commit them in this *separate* website repository, not
in the course-materials repository.

### Option C: Netlify / Cloudflare Pages / any static host

Drag-and-drop or point the tool at the `website/` directory. No build
command is needed (build it locally first).

## Updating the site after editing the textbook

1. Edit `text.org` (this is the canonical source — see
   `README_WEBSITE.md` for how the org file maps to pages).
2. If you changed any code block with a `:tangle` header, re-tangle so the
   `codesnips/` files stay in sync:
   `emacs --batch --eval "(progn (require 'org) (org-babel-tangle-file \"text.org\"))"`
3. Regenerate: `python3 generate_website.py`
4. Re-upload: the same `rsync`/git-push as above. Only the small generated
   files change; the 58 MB `assets/` directory never needs re-uploading.

## What students can and cannot do in the browser

**Works well:** editing any example, running programs that print output,
loops, functions, arrays, vectors — the compile happens on the student's
own machine (via WebAssembly), so there is no server load and no risk from
malicious code; it runs in the browser sandbox.

**Known limitation — keyboard input:** programs that read from `cin` do
*not* pause and wait the way they do in a real terminal. The program runs
to completion immediately with empty input (you'll see the prompt printed
and then the program ending). This is a limitation of the wasm-clang
toolchain's non-blocking input. For input-driven examples (the guessing
game, data-validation loops), the text's Preface already directs students
to OnlineGDB or a local `g++` install; the in-browser runner is a
convenience for the many examples that don't need typed input.

**First-load speed:** the first "Run Code" fetches the compiler toolchain
(clang is 30 MB, the linker 19 MB, headers 9 MB); on campus wifi this is a
few seconds, and the browser caches it afterward.

## Troubleshooting

| Symptom | Likely cause and fix |
|---|---|
| Editors are empty gray boxes | Page opened via `file://`, or no internet access to the Monaco CDN. Serve over HTTP and check the browser console (F12). |
| "Compiler not available" when running code | `website/assets/` is missing on the server — do one-time setup step 2 and re-upload. |
| Run fails with a MIME/WebAssembly error | Server is sending `.wasm` as the wrong type — see Option A, requirement 1. |
| Page content is stale after editing `text.org` | You edited but didn't regenerate, or uploaded without regenerating. Run `python3 generate_website.py`, then re-upload. |
| Input-reading programs finish instantly | Expected — see "Known limitation" above. |

More detail: `website/TROUBLESHOOTING.md` and `README_WEBSITE.md`.
