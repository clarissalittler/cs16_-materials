#!/bin/bash
# Test script for Problem 5: Grade Book Average

PROGRAM="$1"
TOTAL_TESTS=4
PASSED=0

run_test() {
    local input="$1"
    local expected_avg="$2"
    local expected_max="$3"
    local expected_min="$4"
    local description="$5"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    local success=1

    # Check average (allow small floating point differences)
    if echo "$output" | grep -qE "$(echo "$expected_avg" | sed 's/\./\\./')"; then
        :
    else
        success=0
    fi

    # Check max
    if echo "$output" | grep -qE "$expected_max"; then
        :
    else
        success=0
    fi

    # Check min
    if echo "$output" | grep -qE "$expected_min"; then
        :
    else
        success=0
    fi

    if [ $success -eq 1 ]; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        echo "    Expected avg=$expected_avg, max=$expected_max, min=$expected_min"
        return 1
    fi
}

# Test 1: Simple scores
run_test "3\n80\n90\n70" "80.00" "90" "70" "Three scores: 80, 90, 70"

# Test 2: All same scores
run_test "5\n85\n85\n85\n85\n85" "85.00" "85" "85" "All same scores (85)"

# Test 3: Wide range
run_test "4\n100\n50\n75\n95" "80.00" "100" "50" "Wide range: 100, 50, 75, 95"

# Test 4: Single score
run_test "1\n92" "92.00" "92" "92" "Single score (92)"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
