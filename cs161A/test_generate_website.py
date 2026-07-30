import unittest

import generate_website as website


class PlaygroundBlockTests(unittest.TestCase):
    def test_extracts_playground_mode_without_disturbing_other_headers(self):
        content = """#+begin_src cpp :playground run :tangle codesnips/example.cpp
int main() {
  return 0;
}
#+end_src
"""

        blocks = website.extract_code_blocks(content)

        self.assertEqual(len(blocks), 1)
        self.assertEqual(blocks[0]["playground"], "run")
        self.assertEqual(blocks[0]["code"], "int main() {\n  return 0;\n}")

    def test_rejects_missing_duplicate_and_invalid_playground_modes(self):
        cases = {
            "missing": "#+begin_src cpp\nint x;\n#+end_src",
            "duplicate": (
                "#+begin_src cpp :playground run :playground static\n"
                "int x;\n#+end_src"
            ),
            "invalid": "#+begin_src cpp :playground maybe\nint x;\n#+end_src",
        }

        for name, content in cases.items():
            with self.subTest(name=name):
                with self.assertRaises(ValueError):
                    website.extract_code_blocks(content)

    def test_static_and_run_blocks_render_differently(self):
        content = """#+begin_src cpp :playground static
#include <iostream>
#+end_src

#+begin_src cpp :playground run
int main() {
  return 0;
}
#+end_src
"""

        html, has_playground = website.org_to_html(content, "test")

        self.assertTrue(has_playground)
        self.assertEqual(html.count('class="code-static"'), 1)
        self.assertIn("#include &lt;iostream&gt;", html)
        self.assertEqual(html.count('class="run-code-btn"'), 1)
        self.assertEqual(html.count("codeBlocks['editor-test-1']"), 1)

    def test_static_only_page_omits_interactive_runtime(self):
        section = {
            "title": "Static example",
            "content": (
                "#+begin_src cpp :playground static\n"
                "int add(int x, int y);\n"
                "#+end_src"
            ),
        }

        html = website.generate_page_html(
            section,
            "static-page",
            "Chapter",
            {"prev": None, "next": None},
        )

        self.assertIn('class="code-static"', html)
        self.assertNotIn("monaco-editor", html)
        self.assertNotIn('<script src="app.js">', html)
        self.assertNotIn('id="terminal-overlay"', html)


if __name__ == "__main__":
    unittest.main()
