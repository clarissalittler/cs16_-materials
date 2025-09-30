#!/bin/bash

# CS161A Autograder
# Main grading script for all programming problems

set -e

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Configuration
TIMEOUT=10  # Timeout for student programs in seconds
COMPILE_TIMEOUT=30

# Directories
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TESTS_DIR="$SCRIPT_DIR/tests"
SUBMISSIONS_DIR="$SCRIPT_DIR/submissions"
BUILD_DIR="$SCRIPT_DIR/build"

# Create build directory
mkdir -p "$BUILD_DIR"

# Function to print colored output
print_header() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}$1${NC}"
    echo -e "${BLUE}========================================${NC}"
}

print_success() {
    echo -e "${GREEN}✓ $1${NC}"
}

print_error() {
    echo -e "${RED}✗ $1${NC}"
}

print_warning() {
    echo -e "${YELLOW}⚠ $1${NC}"
}

# Function to compile a C++ program
compile_program() {
    local source_file="$1"
    local output_file="$2"

    if ! g++ -std=c++17 -Wall -o "$output_file" "$source_file" 2>&1; then
        return 1
    fi
    return 0
}

# Function to run a test for a specific problem
run_test() {
    local problem_num="$1"
    local submission_file="$2"

    local test_script="$TESTS_DIR/test_problem${problem_num}.sh"

    if [ ! -f "$test_script" ]; then
        print_error "Test script not found: $test_script"
        return 1
    fi

    # Make test script executable
    chmod +x "$test_script"

    # Run the test script
    bash "$test_script" "$submission_file" "$BUILD_DIR"
    return $?
}

# Function to grade a single submission
grade_submission() {
    local problem_num="$1"
    local submission_file="$2"

    print_header "Grading Problem $problem_num: $(basename "$submission_file")"

    if [ ! -f "$submission_file" ]; then
        print_error "Submission file not found: $submission_file"
        return 1
    fi

    # Compile check
    local exe_name="$BUILD_DIR/problem${problem_num}_student"
    echo "Compiling..."
    if ! compile_program "$submission_file" "$exe_name" 2>&1; then
        print_error "Compilation failed"
        return 1
    fi
    print_success "Compilation successful"

    # Run tests
    echo "Running tests..."
    if run_test "$problem_num" "$exe_name"; then
        print_success "All tests passed"
        return 0
    else
        print_error "Some tests failed"
        return 1
    fi
}

# Function to grade all submissions for a problem
grade_problem() {
    local problem_num="$1"

    print_header "Grading All Submissions for Problem $problem_num"

    local submission_pattern="$SUBMISSIONS_DIR/problem${problem_num}*.cpp"
    local found=0

    for submission in $submission_pattern; do
        if [ -f "$submission" ]; then
            found=1
            grade_submission "$problem_num" "$submission"
            echo ""
        fi
    done

    if [ $found -eq 0 ]; then
        print_warning "No submissions found for problem $problem_num"
    fi
}

# Function to grade all submissions
grade_all() {
    print_header "Grading All Submissions"

    for problem_num in {1..15}; do
        grade_problem "$problem_num"
    done
}

# Main script logic
main() {
    if [ $# -eq 0 ]; then
        echo "Usage: $0 <problem_number|all> [submission_file]"
        echo ""
        echo "Examples:"
        echo "  $0 1 submissions/problem1_student.cpp   # Grade specific submission"
        echo "  $0 1                                     # Grade all submissions for problem 1"
        echo "  $0 all                                   # Grade all submissions for all problems"
        exit 1
    fi

    local target="$1"

    if [ "$target" = "all" ]; then
        grade_all
    elif [[ "$target" =~ ^[0-9]+$ ]]; then
        if [ $# -eq 2 ]; then
            grade_submission "$target" "$2"
        else
            grade_problem "$target"
        fi
    else
        echo "Invalid argument. Use a problem number (1-15) or 'all'"
        exit 1
    fi
}

main "$@"
