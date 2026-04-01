This project gas been created as part of the curriculum by minokim.

reminder: this pogramm takes rather only one string argument or multiple integer arguments. otherwise it will return error.

Description

Push_swap is a highly efficient sorting project that challenged me to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. The goal is to write a program in C which calculates and displays on the standard output the smallest program, made of Push_swap language instructions, that sorts the integers received as arguments.

Key Features:

Tiny Sort: A specialized algorithm for 2 to 5 numbers to ensure minimum operations.

Radix Sort: A bitwise sorting algorithm used for large sets (100+ numbers) to maintain a consistent and reliable performance.

Error Handling: Robust parsing for non-numeric input, duplicates, and integer overflows.

Instructions

Compilation

The project includes a Makefile that compiles the source files. To compile the program, run:

make

This will generate the push_swap executable.

Execution

To run the program, provide a list of integers as arguments:

./push_swap 3 2 1 0 5

Or with a string

ARG="4 67 3 87 23"

Cleaning

To remove object files:

make clean

To remove object files and the executable:

make fclean

Technical Choices

I chose Radix Sort for large stacks because it is very reliable.Instead of comparing numbers directly, I indexed them first. This allowed me to use bitwise operations to sort the numbers based on their binary digits. This approach completely avoids issues with negative numbers or large integers and ensures a stable number of operations.

Resources

Radix Sort Explained: Wikipedia - Radix Sort

42 Project Guidelines: 42 Heilbronn Internal Documentation.

Use of AI

In this project, AI (Gemini 3 Flash) was used as a collaborative peer and technical guide. Specifically, AI assisted in:

Architectural Brainstorming: Structuring the main function to adhere to the 25-line Norminette rule.

Logic Refinement: Debugging the pa/pb pointer logic and optimizing the is_sorted checks.

Documentation: Assistance in generating this README and explaining bitwise operators (>>, &) for the Radix implementation.

Code Optimization: Advising on the use of indexing to handle negative numbers more effectively during the Radix Sort phase.