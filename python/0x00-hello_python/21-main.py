#!/usr/bin/python3

islower = __import__('21-islower').islower

print("a is {}".format("lower" if islower("a") else "upper"))
print("3 is {}".format("lower" if islower("3") else "upper"))
print("W is {}".format("lower" if islower("W") else "upper"))
