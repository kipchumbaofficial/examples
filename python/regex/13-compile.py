#!/usr/bin/python3
"""
Using re.compile
"""
import re


p = re.compile('[a-e]')
print(p.findall('ALX is the best school alongside Holberton'))
