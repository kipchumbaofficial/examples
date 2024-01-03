#!/usr/bin/python3
"""
Backslash in RegEx
"""
import re

s = "ALX.Africa"

mtch = re.search(r'.', s)
matc = re.search(r'\.', s)

print(mtch)
print(matc)
