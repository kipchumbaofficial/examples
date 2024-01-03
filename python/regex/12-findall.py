#!/usr/bin/python3
"""
Using findall method
"""
import re

s = """My ALX id is 12345678
    My friend's is 987654321"""
regex = '\d+'
retval = re.findall(regex, s)
print(retval)
