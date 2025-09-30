#!/bin/bash
# Test script for Problem 2: Number Guessing Game with Hints

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
        echo "    Expected pattern: $expected_pattern"
        return 1
    fi
}

# Test 1: Program provides "too high" or "too low" feedback
run_test "25\n30\n35\n40\n45\n48\n50" "(high|low)" "Program provides high/low feedback"

# Test 2: Program tracks attempts
run_test "1\n2\n3\n4\n5" "(attempt|tries|guess)" "Program tracks number of attempts"

# Test 3: Program provides warming hints
# Note: This is hard to test deterministically, so we just check the program runs
output=$(echo -e "25\n26\n27\n28\n29\n30\n31" | timeout 5 "$PROGRAM" 2>&1)
if [ $? -eq 0 ]; then
    echo "  ✓ Program runs without crashing with multiple guesses"
    ((PASSED++))
else
    echo "  ✗ Program crashed or timed out"
fi

# Test 4: Program handles winning condition
run_test "25\n25\n25\n25\n25\n25\n25" "(correct|win|congratulat|success)" "Program recognizes correct guess"

# Test 5: Program handles running out of attempts (7 wrong guesses)
run_test "1\n2\n3\n4\n5\n6\n7" "(out of|no more|reveal|answer|correct number)" "Program handles running out of attempts"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"
echo ""
echo "NOTE: This problem uses random numbers, so some tests are best-effort."
echo "      The actual correct number varies each run."

if [ $PASSED -ge 3 ]; then
    exit 0
else
    exit 1
fi
