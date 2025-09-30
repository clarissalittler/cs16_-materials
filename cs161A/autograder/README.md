# CS161A Autograder

Automated testing framework for CS161A programming assignments.

## Directory Structure

```
autograder/
├── grader.sh              # Main grading script
├── tests/                 # Test scripts for each problem
│   ├── test_problem1.sh
│   ├── test_problem2.sh
│   └── ...
├── reference_solutions/   # Reference implementations
├── submissions/           # Student submissions go here
└── build/                 # Compiled binaries (auto-created)
```

## Usage

### Grade a Specific Submission

```bash
./grader.sh <problem_number> <path_to_submission>
```

Example:
```bash
./grader.sh 1 submissions/problem1_student.cpp
```

### Grade All Submissions for a Problem

```bash
./grader.sh <problem_number>
```

Example:
```bash
./grader.sh 1
```

This will grade all files matching `submissions/problem1*.cpp`

### Grade All Submissions

```bash
./grader.sh all
```

## Submission Naming Convention

Student submissions should be named:
- `problem1_studentname.cpp`
- `problem2_studentname.cpp`
- etc.

## Test Scripts

Each problem has a corresponding test script in `tests/`:

### Problem Coverage

1. **Problem 1**: Temperature Converter - Tests all 6 conversion types
2. **Problem 2**: Number Guessing Game - Basic functionality test
3. **Problem 3**: Input Validation - Tests validation logic
4. **Problem 4**: Pyramid Pattern - Tests pattern correctness at multiple heights
5. **Problem 5**: Grade Book Average - Tests statistical calculations
6. **Problem 6**: Dice Roll Statistics - Tests random number handling
7. **Problem 7**: Word Statistics - Tests character counting
8. **Problem 8**: Simple Cipher - Tests encoding/decoding with multiple cases
9. **Problem 9**: Day of Week Calculator - Tests switch statement logic
10. **Problem 10**: Array Rotation - Tests array manipulation
11. **Problem 11**: Prime Number Checker - Tests prime detection algorithm
12. **Problem 12**: Distance Calculator - Tests mathematical functions
13. **Problem 13**: Sales Receipt - Tests arithmetic and formatting
14. **Problem 14**: Array Search and Replace - Tests pass-by-reference
15. **Problem 15**: Time Converter - Tests unit conversion functions

## Adding New Tests

To add tests for a new problem:

1. Create `tests/test_problemN.sh`
2. Make it executable: `chmod +x tests/test_problemN.sh`
3. Follow this template:

```bash
#!/bin/bash
PROGRAM="$1"
TOTAL_TESTS=3
PASSED=0

run_test() {
    local input="$1"
    local expected="$2"
    local description="$3"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    if echo "$output" | grep -qE "$expected"; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        return 1
    fi
}

# Add your tests here
run_test "input1" "expected_output1" "Test description 1"
run_test "input2" "expected_output2" "Test description 2"
run_test "input3" "expected_output3" "Test description 3"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
```

## Features

- ✅ Automatic compilation checking
- ✅ Timeout protection (5 seconds per test)
- ✅ Pattern matching for output validation
- ✅ Color-coded output
- ✅ Detailed error messages
- ✅ Batch grading support

## Requirements

- g++ with C++17 support
- bash
- timeout command (GNU coreutils)
- grep with regex support

## Output Format

The grader provides colored output:
- 🔵 Blue: Headers and section markers
- ✅ Green: Success messages
- ❌ Red: Errors and failures
- ⚠️  Yellow: Warnings

## Exit Codes

- `0`: All tests passed
- `1`: Compilation failed or tests failed

## Notes for Instructors

### Customizing Tests

Edit the test scripts in `tests/` to adjust:
- Test cases and inputs
- Expected output patterns
- Number of tests
- Timeout values

### Partial Credit

The current framework is pass/fail. To implement partial credit:

1. Modify test scripts to output scores
2. Update `grader.sh` to accumulate scores
3. Add grade calculation logic

### Security Considerations

- Student code runs with same privileges as grader
- Consider using containers or sandboxes for production
- The `timeout` command prevents infinite loops
- No network access is required

### Common Issues

**Test always fails despite correct output:**
- Check regex patterns in test scripts
- Use `-E` flag for extended regex
- Test patterns with `grep` manually

**Compilation warnings:**
- Warnings don't fail the grade by default
- Add `-Werror` to `compile_program()` to treat warnings as errors

**Floating point comparisons:**
- Use pattern matching with tolerance
- Example: `"85\.(0[0-9]|[0-9]0)"` matches 85.00-85.99

## Example Workflow

```bash
# Collect student submissions
cp /path/to/submissions/* autograder/submissions/

# Grade problem 1 for all students
./grader.sh 1

# Grade specific student
./grader.sh 1 submissions/problem1_alice.cpp

# Grade everything
./grader.sh all > grades.txt
```

## Troubleshooting

### Tests directory not found
```bash
cd autograder/  # Make sure you're in the autograder directory
```

### Permission denied
```bash
chmod +x grader.sh
chmod +x tests/*.sh
```

### Compilation errors
Check that student code:
- Uses C++17 compatible syntax
- Includes necessary headers
- Has a `main()` function

## Future Enhancements

Potential additions:
- [ ] JSON output for grade book integration
- [ ] Memory leak detection with valgrind
- [ ] Style checking with clang-format
- [ ] Plagiarism detection
- [ ] Web interface
- [ ] Docker containerization
- [ ] Diff viewer for failed tests
