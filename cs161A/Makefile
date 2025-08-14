# --- config ---
EXAMPLES_DIR := codesnips
BIN_DIR      := build

CXX      ?= g++
CXXFLAGS ?= -std=c++17
LDFLAGS  ?=

# All example sources (single directory). For recursive search, see note below.
SRC  := $(wildcard $(EXAMPLES_DIR)/*.cpp)
BINS := $(patsubst $(EXAMPLES_DIR)/%.cpp,$(BIN_DIR)/%,$(SRC))

.PHONY: check all clean list
# Default: compile everything, then clean no matter success/failure.
check:
	@$(MAKE) --no-print-directory all; rc=$$?; \
	$(MAKE) --no-print-directory clean; exit $$rc

# Build all example executables into build/
all: $(BINS)

# Rule: examples/foo.cpp -> build/foo
$(BIN_DIR)/%: $(EXAMPLES_DIR)/%.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

# Ensure build directory exists
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Remove all build artifacts
clean:
	rm -rf $(BIN_DIR)

# Optional: list what would be built
list:
	@printf '%s\n' $(BINS)

