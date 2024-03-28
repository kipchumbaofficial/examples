#!/usr/bin/python3

# Print alphabets without q and e
for index in range(97, 123):
    if index in (101, 113):
        continue
    print(chr(index), end="")
