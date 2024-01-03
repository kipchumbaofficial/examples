#!/usr/bin/python3
"""
Basic Regex
"""
import re


s = "ALX Software Engineering Student"

matchs = re.search(r'Software', s)
print(matchs)
print("Start index: ", matchs.start())
print("End index: ", matchs.end())
