# Function pointers

## 0-print_name.c
Write a function that prints a name.

## 1-array_iterator.c
Write a function that executes a function given as a parameter on each element of an array.

## 2-int_index.c
Write a function that searches for an integer and returns the index of the first match

## 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
Write a program that performs simple operations.
- Compilation: gcc 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
- Usage: `calc num1 operator num2`
- operator is one of the following:
    +: addition
    -: subtraction
    *: multiplication
    /: division
    %: modulo
- The program prints the result of the operation, followed by a new line
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
