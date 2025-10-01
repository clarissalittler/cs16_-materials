#!/bin/bash
# Test script for Problem 7: Word Statistics

PROGRAM="$1"
TOTAL_TESTS=3
PASSED=0

run_test() {
    local input="$1"
    local expected_letters="$2"
    local expected_vowels="$3"
    local expected_words="$4"
    local description="$5"

    local output=$(echo -e "$input" | timeout 5 "$PROGRAM" 2>&1)

    local success=1

    if echo "$output" | grep -qE "[Ll]etters.*$expected_letters"; then
        :
    else
        success=0
    fi

    if echo "$output" | grep -qE "[Vv]owels.*$expected_vowels"; then
        :
    else
        success=0
    fi

    if echo "$output" | grep -qE "[Ww]ords.*$expected_words"; then
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
        return 1
    fi
}

# Test 1: "Hello World" - 10 letters, 3 vowels, 2 words
run_test "Hello World" "10" "3" "2" "\"Hello World\" analysis"

# Test 2: "The quick brown fox" - 16 letters, 5 vowels, 4 words
run_test "The quick brown fox" "16" "5" "4" "\"The quick brown fox\" analysis"

# Test 3: "Programming is fun" - 16 letters, 5 vowels, 3 words
run_test "Programming is fun" "16" "5" "3" "\"Programming is fun\" analysis"

echo ""
echo "Tests passed: $PASSED/$TOTAL_TESTS"

if [ $PASSED -eq $TOTAL_TESTS ]; then
    exit 0
else
    exit 1
fi
