#!/bin/bash
# Test script for Problem 15: Time Converter with Functions

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

# Test 1: 2 hours = 120 minutes
run_test "1\n2" "120" "2 hours = 120 minutes"

# Test 2: 2 hours = 7200 seconds
run_test "1\n2" "7200" "2 hours = 7200 seconds"

# Test 3: 180 seconds = 3 minutes
run_test "3\n180" "3" "180 seconds = 3 minutes"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
