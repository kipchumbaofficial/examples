#!/usr/bin/python3
"""
Using Dollar in RegEx
"""
import re

s = "ALX Africa"
pattern = r'Africa'

if re.search(pattern, s):
    print("Matched!")
else:
    print("Not matched")
