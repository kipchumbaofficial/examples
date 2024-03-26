#!/usr/bin/python3
# Example using modulo for string interpolation

name = 'World'
learner = 'Kipchumba'

print("Hello %s!, I am %s" % (name, learner))
print("Hello %(name)s!, You are %(age)s years old" % {"name": "Victor", "age": 23})
