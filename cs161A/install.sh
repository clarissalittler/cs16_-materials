#!/bin/bash
#
# CS161A Interactive Website - Installation Script
#
# This script sets up the CS161A interactive C++ learning environment.
# Run from the cs161A directory: ./install.sh
#

set -e  # Exit on error

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Print colored messages
info() { echo -e "${BLUE}[INFO]${NC} $1"; }
success() { echo -e "${GREEN}[OK]${NC} $1"; }
warn() { echo -e "${YELLOW}[WARN]${NC} $1"; }
error() { echo -e "${RED}[ERROR]${NC} $1"; }

echo ""
echo "========================================"
echo "  CS161A Interactive Website Installer"
echo "========================================"
echo ""

# Get the directory where the script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Check we're in the right place
if [[ ! -f "text.org" ]]; then
    error "This script must be run from the cs161A directory."
    error "Could not find text.org in current directory."
    exit 1
fi

info "Working directory: $SCRIPT_DIR"

# =============================================================================
# Step 1: Check prerequisites
# =============================================================================
echo ""
info "Checking prerequisites..."

# Check Python
if command -v python3 &> /dev/null; then
    PYTHON_VERSION=$(python3 --version 2>&1)
    success "Python found: $PYTHON_VERSION"
else
    error "Python 3 is required but not found."
    error "Please install Python 3.6 or higher and try again."
    exit 1
fi

# Check Git
if command -v git &> /dev/null; then
    GIT_VERSION=$(git --version 2>&1)
    success "Git found: $GIT_VERSION"
else
    error "Git is required but not found."
    error "Please install Git and try again."
    exit 1
fi

# Check for rsync (optional, will fall back to cp)
if command -v rsync &> /dev/null; then
    USE_RSYNC=true
    success "rsync found (will use for copying)"
else
    USE_RSYNC=false
    warn "rsync not found, will use cp instead"
fi

# =============================================================================
# Step 2: Download wasm-clang assets if needed
# =============================================================================
echo ""
info "Checking for wasm-clang assets..."

TEST1_ASSETS="../test1/assets"

if [[ -d "$TEST1_ASSETS" && -f "$TEST1_ASSETS/shared.js" ]]; then
    success "wasm-clang assets already present in $TEST1_ASSETS"
else
    info "wasm-clang assets not found. Downloading..."
    info "This may take a few minutes (~60MB download)..."
    echo ""

    # Create test1 directory if it doesn't exist
    mkdir -p ../test1
    cd ../test1

    # Remove partial assets directory if it exists
    if [[ -d "assets" ]]; then
        warn "Removing incomplete assets directory..."
        rm -rf assets
    fi

    # Clone wasm-clang
    info "Cloning from https://github.com/binji/wasm-clang ..."
    if git clone --depth=1 https://github.com/binji/wasm-clang assets; then
        success "wasm-clang downloaded successfully!"
    else
        error "Failed to download wasm-clang."
        error "Please check your internet connection and try again."
        exit 1
    fi

    cd "$SCRIPT_DIR"
fi

# =============================================================================
# Step 3: Copy assets to website directory
# =============================================================================
echo ""
info "Setting up website assets..."

# Create website/assets directory
mkdir -p website/assets

# Copy assets
if [[ "$USE_RSYNC" == true ]]; then
    info "Copying assets using rsync..."
    rsync -av --exclude='.git' "$TEST1_ASSETS/" website/assets/
else
    info "Copying assets using cp..."
    cp -r "$TEST1_ASSETS"/* website/assets/
    # Remove .git if it was copied
    rm -rf website/assets/.git 2>/dev/null || true
fi

# Verify copy
if [[ -f "website/assets/shared.js" && -f "website/assets/clang" ]]; then
    success "Assets copied to website/assets/"
else
    error "Asset copy failed. Missing required files."
    exit 1
fi

# =============================================================================
# Step 4: Generate the website
# =============================================================================
echo ""
info "Generating website from text.org..."

if python3 generate_website.py; then
    success "Website generated successfully!"
else
    error "Website generation failed."
    error "Check the output above for details."
    exit 1
fi

# =============================================================================
# Step 5: Verify installation
# =============================================================================
echo ""
info "Verifying installation..."

ERRORS=0

# Check critical files
check_file() {
    if [[ -f "$1" ]]; then
        success "Found: $1"
    else
        error "Missing: $1"
        ((ERRORS++))
    fi
}

check_file "website/index.html"
check_file "website/app.js"
check_file "website/style.css"
check_file "website/assets/shared.js"
check_file "website/assets/clang"
check_file "website/assets/lld"
check_file "website/assets/sysroot.tar"

# Count pages
PAGE_COUNT=$(ls website/page_*.html 2>/dev/null | wc -l)
if [[ $PAGE_COUNT -gt 0 ]]; then
    success "Generated $PAGE_COUNT content pages"
else
    error "No content pages generated"
    ((ERRORS++))
fi

# =============================================================================
# Installation complete
# =============================================================================
echo ""
echo "========================================"

if [[ $ERRORS -eq 0 ]]; then
    echo -e "${GREEN}  Installation Complete!${NC}"
    echo "========================================"
    echo ""
    echo "To start the website:"
    echo ""
    echo "  cd website"
    echo "  python3 -m http.server 8000"
    echo ""
    echo "Then open your browser to:"
    echo ""
    echo "  http://localhost:8000/"
    echo ""
    echo "For troubleshooting, see:"
    echo "  - INSTALL.md (this directory)"
    echo "  - website/TROUBLESHOOTING.md"
    echo ""
else
    echo -e "${RED}  Installation had $ERRORS error(s)${NC}"
    echo "========================================"
    echo ""
    echo "Please check the errors above and try again."
    echo "For help, see INSTALL.md"
    echo ""
    exit 1
fi
