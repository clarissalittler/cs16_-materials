#!/bin/bash
# Test script for Problem 9: Day of Week Calculator

PROGRAM="$1"
TOTAL_TESTS=5
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

# Test 1: Get day name for Monday (1)
run_test "1\n1" "monday" "Day 1 = Monday"

# Test 2: Get day name for Sunday (7)
run_test "1\n7" "sunday" "Day 7 = Sunday"

# Test 3: Weekday check for Monday
run_test "2\n1" "weekday" "Monday is a weekday"

# Test 4: Weekend check for Sunday
run_test "2\n7" "weekend" "Sunday is weekend"

# Test 5: Next day after Sunday wraps to Monday
run_test "3\n7" "monday" "Next day after Sunday is Monday"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
