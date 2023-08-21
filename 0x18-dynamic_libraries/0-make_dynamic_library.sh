#!/bin/bash

# Create object code files
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c

# Create the shared library
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -shared -o libdynamic.so *.o

# Compile the program with the dynamic library
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o test

# Add the pwd to the search path of dynamic libraries
export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
