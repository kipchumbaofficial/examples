#!/usr/bin/python

# USing fstrings for interpolation

name = "Victor"
age = 23

print(f"Hello I am {name}, I am {age}")

# Embeding expressions into f -strings
print(f"The sum of 400067 and 367000 is {400067 + 367000}")
# Function calls
print(f"Hello I om {name.upper()}, I am {age}")

# Comphension
print(f"{[2**n for n in range(0, 10)]}")
