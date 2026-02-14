#!/bin/bash

g++-13 -std=c++20 \
-Wall -Wextra -Werror -pedantic \
-fsanitize-address,undefined \
-g \
"$1" -o main

./main
