#!/bin/bash
# This is a Bash build file for the myCopier application
# build.sh takes two arguments 
# The first command-line argument is the file to read and the second command-line argument is the file to write.
# Example invocation:
# To copy file1.txt to file2.txt: ./myCopier input.txt output.txt

g++ myCopier.cpp -o myCopier
