#!/bin/bash
# Test script for Problem 6: Dice Roll Statistics

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

# Test 1: Program displays all sums 2-12
output=$(echo "100" | timeout 5 "$PROGRAM" 2>&1)
if echo "$output" | grep -qE "2.*3.*4.*5.*6.*7.*8.*9.*10.*11.*12"; then
    echo "  ✓ Displays all possible sums (2-12)"
    ((PASSED++))
else
    echo "  ✗ Missing some dice sums"
fi

# Test 2: Program shows most frequent
run_test "100" "(most|frequent|common)" "Shows most frequent sum"

# Test 3: Program shows least frequent
run_test "100" "(least|rare|infrequent)" "Shows least frequent sum"

# Test 4: Program calculates percentage of 7s
run_test "100" "(7.*%|percent.*7)" "Calculates percentage of 7s"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
