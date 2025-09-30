#!/bin/bash
# Test script for Problem 3: Input Validation Loop

PROGRAM="$1"
TOTAL_TESTS=4
PASSED=0

run_test() {
    local input="$1"
    local expected_pattern="$2"
    local description="$3"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    if echo "$output" | grep -qiE "$expected_pattern"; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        return 1
    fi
}

# Test 1: Valid input accepted (age 18, grade 10, courses 5)
run_test "18\n10\n5" "(valid|confirm|success|registration)" "Accepts valid input"

# Test 2: Rejects invalid age (too high, then valid)
run_test "150\n18\n10\n5" "(error|invalid|must be|between)" "Rejects age out of range"

# Test 3: Rejects invalid grade level (13 is not 9-12)
run_test "18\n13\n10\n5" "(error|invalid|must be|9.*10.*11.*12)" "Rejects invalid grade level"

# Test 4: Rejects invalid course count (9 is not 4-8)
run_test "18\n10\n9\n5" "(error|invalid|must be|between|4.*8)" "Rejects course count out of range"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
