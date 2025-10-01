#!/bin/bash
# Test all 15 reference solutions

echo "Testing All 15 Reference Solutions"
echo "===================================="
echo ""

TOTAL_PROBLEMS=15
PASSED=0
FAILED=0

for i in {1..15}; do
    echo -n "Problem $i: "

    if [ ! -f "reference_solutions/problem${i}_reference.cpp" ]; then
        echo "MISSING REFERENCE SOLUTION"
        ((FAILED++))
        continue
    fi

    # Run grader and capture result
    if ./grader.sh $i reference_solutions/problem${i}_reference.cpp > /tmp/test_output_$i.txt 2>&1; then
        tests_line=$(grep "Tests passed:" /tmp/test_output_$i.txt)
        echo "✓ PASS - $tests_line"
        ((PASSED++))
    else
        tests_line=$(grep "Tests passed:" /tmp/test_output_$i.txt || echo "FAILED TO RUN")
        echo "✗ FAIL - $tests_line"
        ((FAILED++))
        echo "   See /tmp/test_output_$i.txt for details"
    fi
done

echo ""
echo "===================================="
echo "Summary: $PASSED/$TOTAL_PROBLEMS passed"

if [ $PASSED -eq $TOTAL_PROBLEMS ]; then
    echo "✓ ALL TESTS PASSED!"
    exit 0
else
    echo "✗ $FAILED test(s) failed"
    exit 1
fi
