# Warnings
A collection of common C programming warnings and errors with simple, standalone examples. This repository helps beginners understand compiler diagnostics, learn why they occur, and write safer, cleaner code using GCC warning flags such as -Wall and -Wextra.
This repository contains simple C programs that demonstrate common compiler warnings encountered during development.

## Topics Covered

- Uninitialized Variable
- Unused Variable
- Unused Parameter
- Assignment vs Comparison (`=` vs `==`)
- Missing Return Statement
- Function Not Declared
- Wrong Pointer Type
- Signed vs Unsigned Comparison
- Array Index Out of Bounds
- Wrong printf Format Specifier
- Returning Address of Local Variable

## Compile

```bash
gcc -Wall -Wextra file.c -o file
