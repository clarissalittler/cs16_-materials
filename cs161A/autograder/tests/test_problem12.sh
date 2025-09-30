#!/bin/bash
# Test script for Problem 12: Distance Calculator Function

PROGRAM="$1"
TOTAL_TESTS=3
PASSED=0

run_test() {
    local input="$1"
    local expected_pattern="$2"
    local description="$3"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    if echo "$output" | grep -qE "$expected_pattern"; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        return 1
    fi
}

# Test 1: 2D Euclidean distance from (0,0) to (3,4) = 5
run_test "1\n0\n0\n3\n4" "5\.00" "2D Euclidean distance (3-4-5 triangle)"

# Test 2: Manhattan distance (0,0) to (3,4) = 7
run_test "3\n0\n0\n3\n4" "7\.00" "Manhattan distance = 3 + 4 = 7"

# Test 3: 3D Euclidean distance from (0,0,0) to (1,2,2) = 3
run_test "2\n0\n0\n0\n1\n2\n2" "3\.00" "3D Euclidean distance sqrt(1+4+4)=3"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
