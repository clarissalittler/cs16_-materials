#!/bin/bash
# Test script for Problem 4: Pyramid Pattern Printer

PROGRAM="$1"
TOTAL_TESTS=3
PASSED=0

run_test() {
    local height="$1"
    local description="$2"

    local output=$(echo "$height" | timeout 5 "$PROGRAM" 2>&1)

    # Count the number of lines with asterisks
    local lines=$(echo "$output" | grep -c '\*')

    if [ "$lines" -eq "$height" ]; then
        # Check last line has correct number of asterisks
        local last_line=$(echo "$output" | grep '\*' | tail -1)
        local expected_asterisks=$((2 * height - 1))
        local actual_asterisks=$(echo "$last_line" | grep -o '\*' | wc -l)

        if [ "$actual_asterisks" -eq "$expected_asterisks" ]; then
            echo "  ✓ $description"
            ((PASSED++))
            return 0
        fi
    fi

    echo "  ✗ $description"
    echo "    Expected $height lines with $(($height * 2 - 1)) asterisks on last line"
    return 1
}

# Test 1: Small pyramid (height 3)
run_test "3" "Pyramid with height 3"

# Test 2: Medium pyramid (height 5)
run_test "5" "Pyramid with height 5"

# Test 3: Larger pyramid (height 10)
run_test "10" "Pyramid with height 10"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
