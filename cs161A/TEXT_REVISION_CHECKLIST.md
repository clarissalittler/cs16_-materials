# CS161A Text Revision Checklist

This checklist tracks revisions for `cs161A/text.org`, which is the canonical source for CS161A.

## 1. Student-Facing Cleanup

- Remove author-only scaffolding at the top of the file.
  - `Meta-meta, delete eventually`
  - `Meta-commentary`
  - placeholder note for interactive instructions
  - empty roadmap stub
- Remove `DONE` / `TODO` status markers from headings that are visible to students.
- Delete empty placeholder headings that do not yet teach anything.

Relevant source locations:
- `text.org:1`
- `text.org:26`
- `text.org:30`
- `text.org:31`
- `text.org:80`
- `text.org:2065`
- `text.org:5839`
- `text.org:5843`

## 2. Chapter Naming and Flow

- Replace vague chapter names with instructional titles.
  - `More early steps`
  - `More advanced programs`
- Decide whether `Project Ideas` and `Sample Solutions` should remain in the main text or move to appendices / separate files.

Relevant source locations:
- `text.org:214`
- `text.org:2370`
- `text.org:5845`
- `text.org:5935`

## 3. CS161A vs CS161B Overlap

- Keep vectors, structs, file I/O, multi-file programs, and algorithms in CS161A.
- Revise the framing so they read as intentional overlap in a slower-paced sequence rather than accidental spillover from CS161B.

Relevant source locations:
- `text.org:4398`
- `text.org:4427`
- `text.org:4687`
- `text.org:4958`
- `text.org:5306`
- `text.org:5474`

## 4. Still-Thin Teaching Areas

- Completed in this pass:
  - nested loops now include a centered-pyramid walkthrough
  - frequency counting now includes two-dice statistics
  - array rotation now includes a full worked example
  - Caesar cipher now includes a complete worked program
- Still worth revisiting later:
  - decide whether these examples should become direct bridges to specific labs / graded problems
  - smooth any redundancy between early explanations and later algorithm sections

Relevant source locations:
- `text.org:1661`
- `text.org:1988`
- `text.org:2040`
- `text.org:2989`

Related graded problems:
- `graded_problems.org:70`
- `graded_problems.org:106`
- `graded_problems.org:209`
- `graded_problems.org:172`

## 5. Consolidation Opportunities

- Reduce duplication where later sections repeat ideas that are already taught earlier.
- Keep one authoritative explanation for:
  - bool-return helper functions
  - prime testing
  - distance formulas
  - multi-output reference parameters

Relevant source locations:
- `text.org:2922`
- `text.org:3314`
- `text.org:3417`
- `text.org:3917`
- `text.org:5686`

## 6. Suggested Revision Order

1. Cleanup and heading normalization.
2. Resolve the CS161A / CS161B boundary.
3. Fill the thin algorithm/pattern sections needed by graded problems.
4. Decide appendix strategy for project ideas and sample solutions.
