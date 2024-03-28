#!/usr/bin/python3

# Check if  letter is lower case

def islower(c):
    if ord(c) in range(97, 123):
        return True
    else:
        return False
