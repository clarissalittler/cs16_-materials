#!/bin/bash
# Test script for Problem 10: Array Rotation

PROGRAM="$1"
TOTAL_TESTS=3
PASSED=0

run_test() {
    local input="$1"
    local expected_pattern="$2"
    local description="$3"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    # Extract the rotated array line (look for numbers in sequence)
    if echo "$output" | grep -qE "$expected_pattern"; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        echo "    Expected pattern: $expected_pattern"
        return 1
    fi
}

# Test 1: Rotate [1,2,3,4,5,6,7,8] right by 1 -> [8,1,2,3,4,5,6,7]
run_test "1\n2\n3\n4\n5\n6\n7\n8\n1" "8.*1.*2.*3.*4.*5.*6.*7" "Rotate right by 1"

# Test 2: Rotate [1,2,3,4,5,6,7,8] right by 3 -> [6,7,8,1,2,3,4,5]
run_test "1\n2\n3\n4\n5\n6\n7\n8\n3" "6.*7.*8.*1.*2.*3.*4.*5" "Rotate right by 3"

# Test 3: Rotate [1,2,3,4,5,6,7,8] right by 7 -> [2,3,4,5,6,7,8,1]
run_test "1\n2\n3\n4\n5\n6\n7\n8\n7" "2.*3.*4.*5.*6.*7.*8.*1" "Rotate right by 7"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
