#!/bin/bash

# Create object code files
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c

# Create the shared library
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -shared -o liball.so *.o
