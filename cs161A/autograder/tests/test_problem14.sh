#!/bin/bash
# Test script for Problem 14: Array Search and Replace

PROGRAM="$1"
TOTAL_TESTS=3
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

# Test 1: Replace 3 occurrences of value 5
run_test "1\n2\n3\n5\n5\n5\n7\n8\n9\n10\n11\n12\n5\n99" "3.*replacement" "Finds 3 occurrences of 5"

# Test 2: Replacement value appears in output
run_test "1\n2\n3\n5\n5\n5\n7\n8\n9\n10\n11\n12\n5\n99" "99" "Shows replacement value 99"

# Test 3: No occurrences found (search for 100)
run_test "1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n100\n99" "(0.*replacement|no.*found)" "Reports 0 when target not found"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
