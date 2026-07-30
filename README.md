# CS 16* Course Materials

Open-source educational materials for a sequence of introductory C++ programming courses (CS161A, CS161B, CS162). This repository includes course texts, an interactive web-based C++ playground, automated grading tools, and code examples.

## Repository Structure

```
cs16_-materials/
├── cs161A/             # First quarter - most-developed course package
├── cs161B/             # Second quarter - draft text plus outline
├── cs162/              # Third quarter - outline-first course scaffold
├── test1/              # Experimental WebAssembly compiler infrastructure
├── LICENSE             # MIT License
├── README.md
└── REPOSITORY_GUIDE.md
```

## Canonical Course Sources

Each course's `text.org` file is the source of truth:

- `cs161A/text.org`
- `cs161B/text.org`
- `cs162/text.org`

Other files such as `outline.md`, generated website pages, and Markdown mirrors are secondary.

## Course Content

### CS161A - Introduction to C++

The most developed course in the repository, covering C++ fundamentals across 15 chapters:

| Chapter | Topic |
|---------|-------|
| 1 | Introduction, I/O, and basic program structure |
| 2 | Variables, declarations, and expressions |
| 3 | Data types and math functions |
| 4-5 | Conditionals (if/else, switch, booleans) |
| 6-7 | Loops (while, for, nested loops) |
| 8-9 | Functions (pass by value/reference, overloading) |
| 10 | Arrays |
| 11 | Vectors |
| 12 | Structs |
| 13 | File I/O |
| 14 | Multi-file programs |
| 15 | Common algorithms and problem solving |

**Key resources in `cs161A/`:**
- `text.org` - Canonical course text
- `outline.md` - Condensed outline of the course structure
- `text.md` - Derived Markdown mirror of the course text
- `codesnips/` - 60+ C++ code examples
- `labs/` - 30+ lab exercises
- `exercises/` - Practice problems
- `autograder/` - Automated grading system with 15 test scripts
- `website/` - Generated interactive website

### CS161B - Advanced Fundamentals

Currently a draft text plus a larger outline. The canonical source is `cs161B/text.org`; `cs161B/outline.md` is a planning outline.

Covers intermediate topics including:
- Character arrays and C-strings
- Multi-dimensional arrays
- Pointers and references
- File I/O
- Structs (advanced usage)
- Debugging techniques

### CS162 - Object-Oriented Programming

Currently scaffolded from an outline-first draft. The canonical source is `cs162/text.org`; `cs162/outline.md` remains a condensed outline.

Covers advanced topics including:
- Classes and object-oriented design
- Dynamic memory management
- Rule of Three (copy constructor, destructor, assignment operator)
- Smart pointers
- Linked lists
- Recursion
- Templates
- Sorting algorithms
- Advanced data structures (deque, set, map)

## Interactive Website

CS161A includes a browser-based interactive learning environment where students can:

- Read course material with compact, syntax-styled code fragments
- Edit and run complete C++ examples directly in the browser
- See compilation output and program results instantly

**No compiler installation required** - the website uses WebAssembly to compile and run C++ code entirely in the browser.

### Generating the Website

```bash
cd cs161A
python3 generate_website.py
```

This generates HTML pages in `cs161A/website/` from the canonical `cs161A/text.org` source file.

### Running the Website Locally

```bash
cd cs161A/website
python3 -m http.server 8000
```

Then open http://localhost:8000 in your browser.

For detailed setup instructions, see [cs161A/INSTALL.md](cs161A/INSTALL.md).

## Autograder

The autograder provides automated testing for student submissions:

```bash
cd cs161A/autograder

# Grade a single file
./grader.sh tests/01_temperature.sh student_solution.cpp

# Grade all submissions in a directory
./grader.sh tests/01_temperature.sh submissions/
```

**Features:**
- Automated compilation checking
- Output pattern matching
- 5-second timeout per test (prevents infinite loops)
- Batch grading support
- Color-coded results

Test scripts cover assignments including:
- Temperature conversion
- Number validation and games
- Pattern printing
- Grade calculations
- Text formatting
- And more

## Technologies Used

| Technology | Purpose |
|------------|---------|
| Org-mode | Source format for course content |
| Python 3 | Website generator |
| C++17 | Programming language taught |
| Monaco Editor | Browser-based code editor |
| WebAssembly | In-browser C++ compilation |
| Bash | Installation and grading scripts |

## WebAssembly Compiler (test1/)

The `test1/` directory contains the proof-of-concept for in-browser C++ compilation using:

- **Clang** compiled to WebAssembly
- **LLD** linker compiled to WebAssembly
- **WASI** (WebAssembly System Interface) for system calls
- **Monaco Editor** for code editing

See [test1/HOW_IT_WORKS.md](test1/HOW_IT_WORKS.md) for technical details.

## Quick Start

1. **Clone the repository:**
   ```bash
   git clone <repository-url>
   cd cs16_-materials
   ```

2. **Set up CS161A interactive website:**
   ```bash
   cd cs161A
   ./install.sh        # Downloads required assets
   ./verify_install.sh # Verifies installation
   ```

3. **Generate and serve the website:**
   ```bash
   python3 generate_website.py
   cd website
   python3 -m http.server 8000
   ```

4. **Open in browser:** http://localhost:8000

## File Types

| Extension | Description |
|-----------|-------------|
| `.org` | Org-mode source files (main content) |
| `.md` | Markdown documentation |
| `.cpp` | C++ code examples |
| `.sh` | Bash scripts (installation, grading) |
| `.html` | Generated web pages |
| `.js` | JavaScript for Monaco editor integration |

## Contributing

Contributions are welcome. The canonical course content is written in Org-mode format (`text.org` files), which is then converted into other forms as needed.

To modify course content:
1. Edit the relevant `text.org` file.
2. Regenerate any derived output, such as the CS161A website.
3. Avoid hand-editing generated files.
4. Test locally before submitting changes.

## License

MIT License - Copyright 2025 left_adjoint

See [LICENSE](LICENSE) for details.
