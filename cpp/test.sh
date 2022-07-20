#!/bin/bash
file=$1
g++ "$file" -o exec
./exec
rm exec