#!/usr/bin/python3
"""
Using Square brackets in RegEx
"""
import re


s = "ALX is the best school in the world"
pattern = "[a-m]"
result = re.findall(pattern, s)
print("---Range from a to m")
print(result)

"""
Range except
"""
result = re.findall("[^a-g]", s)
print("---Range except a to g")
print(result)

"""
You can also Set characters
"""
result = re.findall("[abc]", s)
print("---Set of characters")
print(result)
