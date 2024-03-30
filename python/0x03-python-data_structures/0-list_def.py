#!/usr/bin/python3

from sys import argv

squares = []

for arg in argv:
    if arg in argv[1:]:
        squares.append(int(arg) ** 2)
print(squares)
