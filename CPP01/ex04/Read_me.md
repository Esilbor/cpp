
# Exercise 4 - Custom String Replacement Tool

## Overview
Design a program that takes three parameters in the following order: a filename, and two strings (`s1` and `s2`). The program should open the file `<filename>`, copy its content into a new file `<filename>.replace`, where each occurrence of `s1` is replaced with `s2`. The use of C file manipulation functions is forbidden and considered cheating. All member functions of the `std::string` class are allowed except for `replace`. 

## Instructions

1. **Read the Input File**: Use `std::ifstream` to open the input file. Ensure to handle file opening errors gracefully.

2. **Create the Output File**: Append `.replace` to the input file's name to construct the output file name. Use `std::ofstream` to open this file for writing.

3. **Process the Content**: Read the input file's content in manageable chunks. For each chunk, use `std::string::find` and `std::string::substr` to identify occurrences of `s1` and replace them with `s2`. This requires careful string manipulation as direct replacement is not allowed.

4. **Write Processed Content**: Output the modified content to the new file, ensuring all instances of `s1` are replaced with `s2`.

5. **Error Handling**: Implement robust error handling for scenarios such as failure to open the input or output files, and during the read/write process.

6. **Close Files**: Ensure both input and output files are properly closed after the operation to release system resources.

7. **Testing**: Develop and run comprehensive tests with varied file contents and `s1`, `s2` pairs to verify correct behavior under different conditions.

## Error Handling and Robustness
Pay special attention to handling unexpected inputs and errors gracefully. Your program should not crash or behave unpredictably under any circumstances.

## Testing Your Program
It's crucial to create and execute thorough tests that cover all possible use cases, including edge cases, to ensure the reliability and correctness of your program.

## Submission
Ensure the following files are included in your `ex04/` directory for submission:
- `Makefile`
- `main.cpp`
- Additional `*.cpp` and `*.{h,hpp}` files as necessary.

Remember, the goal is to demonstrate mastery of file and string manipulation in C++ without relying on the forbidden `std::string::replace` function. Good luck!
