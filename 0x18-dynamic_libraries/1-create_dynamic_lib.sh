#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c)

# Compile the .c files into a dynamic library
gcc -shared -o liball.so $c_files
