#!/usr/bin/python3

# Using the str.format method for interpolation

name = "Victor"
age = "23"

person = {"name": "Chirchir", "age": 23}

print("Hello I am {}, I am {}".format(name, age))
# Using Zero based index to specify position

print("I am {1}, My name is {0}".format(name, age))

# Using keyworded argument
print("Hello I am {name}, I am {age}".format(name="Kipchumba", age=23))

# Using dictionary and ** unpacking operator
print("Hello I am {name}, I am {age}".format(**person))
