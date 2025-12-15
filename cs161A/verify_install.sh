#!/bin/bash
#
# CS161A Interactive Website - Installation Verification Script
#
# Checks that all required components are properly installed.
# Run from the cs161A directory: ./verify_install.sh
#

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Print colored messages
success() { echo -e "${GREEN}[OK]${NC} $1"; }
warn() { echo -e "${YELLOW}[WARN]${NC} $1"; }
error() { echo -e "${RED}[FAIL]${NC} $1"; }
info() { echo -e "${BLUE}[INFO]${NC} $1"; }

echo ""
echo "========================================"
echo "  CS161A Installation Verification"
echo "========================================"
echo ""

ERRORS=0
WARNINGS=0

# Get the directory where the script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# =============================================================================
# Check 1: Prerequisites
# =============================================================================
info "Checking prerequisites..."

# Python
if command -v python3 &> /dev/null; then
    PYTHON_VERSION=$(python3 -c 'import sys; print(".".join(map(str, sys.version_info[:2])))')
    # Check version is at least 3.6 using Python itself
    if python3 -c 'import sys; exit(0 if sys.version_info >= (3, 6) else 1)' 2>/dev/null; then
        success "Python 3 available (version $PYTHON_VERSION)"
    else
        warn "Python version $PYTHON_VERSION may be too old (3.6+ recommended)"
        ((WARNINGS++))
    fi
else
    error "Python 3 not found"
    ((ERRORS++))
fi

# Git (optional, only needed for updates)
if command -v git &> /dev/null; then
    success "Git available"
else
    warn "Git not found (only needed for downloading/updating assets)"
    ((WARNINGS++))
fi

echo ""

# =============================================================================
# Check 2: Source Files
# =============================================================================
info "Checking source files..."

if [[ -f "text.org" ]]; then
    LINE_COUNT=$(wc -l < text.org)
    success "text.org present ($LINE_COUNT lines)"
else
    error "text.org not found (source content missing)"
    ((ERRORS++))
fi

if [[ -f "generate_website.py" ]]; then
    success "generate_website.py present"
else
    error "generate_website.py not found (website generator missing)"
    ((ERRORS++))
fi

echo ""

# =============================================================================
# Check 3: wasm-clang Assets (source location)
# =============================================================================
info "Checking wasm-clang source assets..."

if [[ -d "../test1/assets" ]]; then
    if [[ -f "../test1/assets/shared.js" ]]; then
        success "wasm-clang assets in ../test1/assets/"
    else
        warn "../test1/assets/ exists but may be incomplete"
        ((WARNINGS++))
    fi
else
    warn "wasm-clang not downloaded to ../test1/assets/"
    warn "Run: cd ../test1 && git clone --depth=1 https://github.com/binji/wasm-clang assets"
    ((WARNINGS++))
fi

echo ""

# =============================================================================
# Check 4: Website Directory
# =============================================================================
info "Checking website directory..."

if [[ -d "website" ]]; then
    success "website/ directory exists"
else
    error "website/ directory not found"
    error "Run: python3 generate_website.py"
    ((ERRORS++))
fi

echo ""

# =============================================================================
# Check 5: Website Assets (deployed location)
# =============================================================================
info "Checking website assets..."

ASSET_FILES=("shared.js" "clang" "lld" "sysroot.tar" "memfs")
MISSING_ASSETS=0

for asset in "${ASSET_FILES[@]}"; do
    if [[ -f "website/assets/$asset" ]]; then
        success "website/assets/$asset"
    else
        error "website/assets/$asset missing"
        ((MISSING_ASSETS++))
    fi
done

if [[ $MISSING_ASSETS -gt 0 ]]; then
    error "$MISSING_ASSETS asset file(s) missing"
    error "Run: rsync -av --exclude='.git' ../test1/assets/ website/assets/"
    ((ERRORS++))
fi

echo ""

# =============================================================================
# Check 6: Generated Website Files
# =============================================================================
info "Checking generated website files..."

# Check index.html
if [[ -f "website/index.html" ]]; then
    success "website/index.html"
else
    error "website/index.html missing"
    ((ERRORS++))
fi

# Check app.js
if [[ -f "website/app.js" ]]; then
    success "website/app.js"
else
    error "website/app.js missing"
    ((ERRORS++))
fi

# Check style.css
if [[ -f "website/style.css" ]]; then
    success "website/style.css"
else
    error "website/style.css missing"
    ((ERRORS++))
fi

# Count page files
PAGE_COUNT=$(ls website/page_*.html 2>/dev/null | wc -l)
if [[ $PAGE_COUNT -gt 30 ]]; then
    success "$PAGE_COUNT content pages generated"
elif [[ $PAGE_COUNT -gt 0 ]]; then
    warn "Only $PAGE_COUNT pages generated (expected ~36)"
    ((WARNINGS++))
else
    error "No content pages generated"
    error "Run: python3 generate_website.py"
    ((ERRORS++))
fi

echo ""

# =============================================================================
# Check 7: Asset Size
# =============================================================================
info "Checking asset sizes..."

if [[ -f "website/assets/clang" ]]; then
    CLANG_SIZE=$(du -h website/assets/clang 2>/dev/null | cut -f1)
    success "clang compiler: $CLANG_SIZE"
fi

if [[ -f "website/assets/sysroot.tar" ]]; then
    SYSROOT_SIZE=$(du -h website/assets/sysroot.tar 2>/dev/null | cut -f1)
    success "sysroot.tar: $SYSROOT_SIZE"
fi

if [[ -d "website/assets" ]]; then
    TOTAL_SIZE=$(du -sh website/assets 2>/dev/null | cut -f1)
    info "Total assets size: $TOTAL_SIZE"
fi

echo ""

# =============================================================================
# Summary
# =============================================================================
echo "========================================"

if [[ $ERRORS -eq 0 && $WARNINGS -eq 0 ]]; then
    echo -e "${GREEN}  All checks passed!${NC}"
    echo "========================================"
    echo ""
    echo "Your installation is complete and ready to use."
    echo ""
    echo "Start the server with:"
    echo "  cd website && python3 -m http.server 8000"
    echo ""
    echo "Then open: http://localhost:8000/"
    echo ""
    exit 0
elif [[ $ERRORS -eq 0 ]]; then
    echo -e "${YELLOW}  Passed with $WARNINGS warning(s)${NC}"
    echo "========================================"
    echo ""
    echo "The website should work, but you may want to address the warnings."
    echo ""
    exit 0
else
    echo -e "${RED}  Failed: $ERRORS error(s), $WARNINGS warning(s)${NC}"
    echo "========================================"
    echo ""
    echo "Please fix the errors above before using the website."
    echo ""
    echo "Quick fix - run the installer:"
    echo "  ./install.sh"
    echo ""
    echo "Or see INSTALL.md for manual instructions."
    echo ""
    exit 1
fi
