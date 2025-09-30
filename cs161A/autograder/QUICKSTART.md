# Autograder Quick Start

## Installation

No installation needed! The autograder is ready to use.

## Quick Test

Test the autograder with included reference solutions:

```bash
cd autograder

# Test Problem 1 (Temperature Converter)
./grader.sh 1 reference_solutions/problem1_reference.cpp

# Test Problem 4 (Pyramid Pattern)
./grader.sh 4 reference_solutions/problem4_reference.cpp

# Test Problem 8 (Caesar Cipher)
./grader.sh 8 reference_solutions/problem8_reference.cpp
```

## Grade Student Submissions

1. **Collect submissions** - Students should submit files named:
   - `problem1_lastname.cpp`
   - `problem2_lastname.cpp`
   - etc.

2. **Place in submissions folder**:
   ```bash
   cp /path/to/student/files/*.cpp submissions/
   ```

3. **Run grader**:
   ```bash
   # Grade all Problem 1 submissions
   ./grader.sh 1

   # Grade specific student
   ./grader.sh 1 submissions/problem1_smith.cpp

   # Grade everything
   ./grader.sh all
   ```

## Understanding Output

✅ **Green checkmarks** = Test passed
❌ **Red X marks** = Test failed
⚠️  **Yellow warnings** = Issues (like compilation warnings)

Example output:
```
========================================
Grading Problem 1: problem1_student.cpp
========================================
Compiling...
✓ Compilation successful
Running tests...
  ✓ 32°F to Celsius = 0°C
  ✓ 0°C to Fahrenheit = 32°F
  ✓ 100°C to Fahrenheit = 212°F
  ✓ 0°C to Kelvin = 273.15K
  ✓ 273.15K to Celsius = 0°C
  ✓ Invalid menu choice handling

Tests passed: 6/6
✓ All tests passed
```

## Test Coverage by Problem

| Problem | Tests | What's Tested |
|---------|-------|---------------|
| 1 | 6 | All temperature conversions + error handling |
| 4 | 3 | Pyramid patterns at different heights |
| 5 | 4 | Array statistics (avg, min, max) |
| 7 | 3 | String analysis (letters, vowels, words) |
| 8 | 4 | Caesar cipher encode/decode |
| 10 | 3 | Array rotation by different amounts |
| 11 | 4 | Prime number detection in ranges |
| 13 | 3 | Sales calculations with tax/discount |

## Troubleshooting

**"Command not found"**
```bash
chmod +x grader.sh
```

**"No such file or directory"**
```bash
# Make sure you're in the autograder directory
cd /path/to/cs161A/autograder
```

**"Compilation failed"**
- Check student code for syntax errors
- Ensure they're using standard C++ headers
- Verify they have a `main()` function

## Getting Help

See `README.md` for:
- Detailed documentation
- How to add new tests
- Customization options
- Advanced features
