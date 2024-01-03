#!/usr/bin/python3
"""
Using dot in regex
"""
import re

s = "The quick brown fox jumped over the lazy sleepy dog"
regex = r'brown.fox'

if re.search(regex, s):
    print("Matched!")
else:
    print("Not matched!")
