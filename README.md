# ASCII Snowman Challenge

Write a function that draws a snowman! The detailed specification can be found at:
https://codegolf.stackexchange.com/q/49671/12019

## Requirements

- Complete implementation that passes all tests (75% of grade): `make test && ./test`
- Code quality check (25% of grade): `make tidy`
- Main program demonstrating your solution
- Check your grade: `bash grade`

**Note:** Do not modify existing files, only add new files.

## Solution

This repository contains a complete implementation of the ASCII Snowman Challenge, creating snowmen using ASCII characters based on input parameters. The solution is designed to be both efficient and readable, passing both functional tests and code quality standards.

### Project Structure

- **`snowman.hpp`**: Header file defining the `snowman()` function interface
- **`snowman.cpp`**: Core implementation containing the snowman drawing logic
- **`main.cpp`**: Demonstration program showcasing various snowman configurations
- **`TestRunner.cpp`**: Comprehensive test suite using doctest framework
- **`Makefile`**: Build system for compilation, testing, and code quality checks
- **`doctest.h`**: Testing framework header for unit tests

### Implementation Details

The snowman is constructed using a parameter-based system where each digit of the input number controls different parts of the snowman:

- **Body parts**: Head, torso, and base sections
- **Accessories**: Hats, eyes, nose, arms, and buttons
- **ASCII representation**: Uses standard ASCII characters to create the visual snowman

The implementation follows clean code principles with:
- Clear function signatures and documentation
- Modular design for easy testing and maintenance
- Comprehensive error handling
- Efficient string manipulation for ASCII art generation

### Testing and Quality

The project includes automated testing through:
- **Unit tests**: Verify individual snowman components and configurations
- **Integration tests**: Ensure complete snowman rendering works correctly
- **Code quality**: clang-tidy integration for style and best practices
- **Build automation**: Makefile targets for easy development workflow

### Usage

```bash
# Compile the project
make

# Run tests
make test

# Check code quality
make tidy

# Run the demonstration
./main

# Get your grade
bash grade
```

The solution demonstrates effective C++ programming practices while solving the creative challenge of ASCII art generation through algorithmic design.



