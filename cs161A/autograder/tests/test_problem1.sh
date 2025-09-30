#!/bin/bash
# Test script for Problem 1: Temperature Converter

PROGRAM="$1"
TOTAL_TESTS=6
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
        echo "    Expected pattern: $expected_pattern"
        echo "    Got: $output"
        return 1
    fi
}

# Test 1: Fahrenheit to Celsius (32°F = 0°C)
run_test "1\n32" "0\.00" "32°F to Celsius = 0°C"

# Test 2: Celsius to Fahrenheit (0°C = 32°F)
run_test "3\n0" "32\.00" "0°C to Fahrenheit = 32°F"

# Test 3: Celsius to Fahrenheit (100°C = 212°F)
run_test "3\n100" "212\.00" "100°C to Fahrenheit = 212°F"

# Test 4: Celsius to Kelvin (0°C = 273.15K)
run_test "4\n0" "273\.15" "0°C to Kelvin = 273.15K"

# Test 5: Kelvin to Celsius (273.15K = 0°C)
run_test "6\n273.15" "0\.00" "273.15K to Celsius = 0°C"

# Test 6: Invalid choice handling
run_test "7\n100" "(Invalid|invalid|error|Error)" "Invalid menu choice handling"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
