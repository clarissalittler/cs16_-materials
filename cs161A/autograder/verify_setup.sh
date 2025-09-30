#!/bin/bash
# Verification script for autograder setup

echo "CS161A Autograder Setup Verification"
echo "====================================="
echo ""

ERRORS=0

# Check grader.sh exists and is executable
if [ -x "grader.sh" ]; then
    echo "✓ grader.sh found and executable"
else
    echo "✗ grader.sh missing or not executable"
    ((ERRORS++))
fi

# Check for test scripts
TEST_COUNT=$(ls tests/test_problem*.sh 2>/dev/null | wc -l)
if [ "$TEST_COUNT" -eq 15 ]; then
    echo "✓ All 15 test scripts present"
else
    echo "✗ Expected 15 test scripts, found $TEST_COUNT"
    ((ERRORS++))
fi

# Check all test scripts are executable
NON_EXEC=$(find tests -name "test_problem*.sh" ! -executable | wc -l)
if [ "$NON_EXEC" -eq 0 ]; then
    echo "✓ All test scripts are executable"
else
    echo "✗ $NON_EXEC test scripts are not executable"
    echo "  Run: chmod +x tests/*.sh"
    ((ERRORS++))
fi

# Check directories exist
for dir in tests submissions reference_solutions; do
    if [ -d "$dir" ]; then
        echo "✓ $dir/ directory exists"
    else
        echo "✗ $dir/ directory missing"
        ((ERRORS++))
    fi
done

# Check for g++ compiler
if command -v g++ &> /dev/null; then
    echo "✓ g++ compiler found"
else
    echo "✗ g++ compiler not found"
    ((ERRORS++))
fi

# Test compilation with a reference solution
if [ -f "reference_solutions/problem1_reference.cpp" ]; then
    mkdir -p build
    if g++ -std=c++17 -o build/test_compile reference_solutions/problem1_reference.cpp 2>/dev/null; then
        echo "✓ Test compilation successful"
        rm -f build/test_compile
    else
        echo "✗ Test compilation failed"
        ((ERRORS++))
    fi
else
    echo "⚠ No reference solution to test compilation"
fi

echo ""
echo "====================================="
if [ "$ERRORS" -eq 0 ]; then
    echo "✓ Setup verification passed!"
    echo ""
    echo "Ready to grade! Try:"
    echo "  ./grader.sh 1 reference_solutions/problem1_reference.cpp"
    exit 0
else
    echo "✗ Setup verification found $ERRORS error(s)"
    echo "Please fix the issues above before using the autograder"
    exit 1
fi
