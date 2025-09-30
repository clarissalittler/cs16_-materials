#!/bin/bash
# Test script for Problem 13: Sales Receipt Calculator

PROGRAM="$1"
TOTAL_TESTS=3
PASSED=0

run_test() {
    local input="$1"
    local expected_final="$2"
    local description="$3"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    # Check for the final total in the output
    if echo "$output" | grep -qE "$expected_final"; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        echo "    Expected final total: $expected_final"
        return 1
    fi
}

# Test 1: $100, 10% tax, 20% discount
# Discount: $20, Price after: $80, Tax: $8, Total: $88
run_test "100\n10\n20" "88\.00" "100 with 10% tax and 20% discount = 88.00"

# Test 2: $50, 8.5% tax, 10% discount
# Discount: $5, Price after: $45, Tax: $3.825, Total: $48.825 ≈ $48.82 or $48.83
run_test "50\n8.5\n10" "48\.8[23]" "50 with 8.5% tax and 10% discount ≈ 48.82"

# Test 3: $200, 5% tax, 0% discount
# Discount: $0, Price after: $200, Tax: $10, Total: $210
run_test "200\n5\n0" "210\.00" "200 with 5% tax and 0% discount = 210.00"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
