#!/bin/bash
# Test all reference solutions

echo "Testing All Reference Solutions"
echo "==============================="
echo ""

for ref in reference_solutions/problem*.cpp; do
    if [ -f "$ref" ]; then
        filename=$(basename "$ref")
        problem_num=$(echo "$filename" | sed 's/problem\([0-9]*\)_reference.cpp/\1/')

        echo "Testing Problem $problem_num ($filename):"
        ./grader.sh "$problem_num" "$ref" 2>&1 | grep "Tests passed"
        echo ""
    fi
done

echo "==============================="
echo "Testing complete!"
