#!/bin/bash
# Test script for Problem 11: Prime Number Checker Function

PROGRAM="$1"
TOTAL_TESTS=4
PASSED=0

run_test() {
    local start="$1"
    local end="$2"
    local expected_primes="$3"
    local description="$4"

    local output=$(echo -e "$start\n$end" | timeout 5 "$PROGRAM" 2>&1)

    # Check if all expected primes are in the output
    local success=1
    for prime in $expected_primes; do
        if ! echo "$output" | grep -qw "$prime"; then
            success=0
            break
        fi
    done

    if [ $success -eq 1 ]; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        echo "    Expected primes: $expected_primes"
        return 1
    fi
}

# Test 1: Primes from 1-10: 2, 3, 5, 7
run_test "1" "10" "2 3 5 7" "Primes from 1 to 10"

# Test 2: Primes from 10-20: 11, 13, 17, 19
run_test "10" "20" "11 13 17 19" "Primes from 10 to 20"

# Test 3: Primes from 20-30: 23, 29
run_test "20" "30" "23 29" "Primes from 20 to 30"

# Test 4: Primes from 50-60: 53, 59
run_test "50" "60" "53 59" "Primes from 50 to 60"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
