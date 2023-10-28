#!/bin/bash

# Compile all .c files and create object files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library from object files
ar -rcs liball.a *.o

# Index the static library
ranlib liball.a

# Clean up object files
rm -f *.o
