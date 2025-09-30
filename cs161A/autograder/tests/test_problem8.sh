#!/bin/bash
# Test script for Problem 8: Simple Cipher

PROGRAM="$1"
TOTAL_TESTS=4
PASSED=0

run_test() {
    local input="$1"
    local expected="$2"
    local description="$3"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    if echo "$output" | grep -qF "$expected"; then
        echo "  ✓ $description"
        ((PASSED++))
        return 0
    else
        echo "  ✗ $description"
        echo "    Expected: $expected"
        return 1
    fi
}

# Test 1: Encode "Hello" with shift 3 -> "Khoor"
run_test "E\n3\nHello" "Khoor" "Encode 'Hello' with shift 3"

# Test 2: Encode "ABC" with shift 1 -> "BCD"
run_test "E\n1\nABC" "BCD" "Encode 'ABC' with shift 1"

# Test 3: Decode "Khoor" with shift 3 -> "Hello"
run_test "D\n3\nKhoor" "Hello" "Decode 'Khoor' with shift 3"

# Test 4: Encode with spaces and punctuation preserved
run_test "E\n5\nHello World!" "Mjqqt Btwqi!" "Encode 'Hello World!' preserving spaces and punctuation"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
