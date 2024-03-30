#!/usr/bin/python3

'''Creating a list using for loops
    Creates a variable which still exist after 
    the loop completes
'''

squares = []

for x in range(10):
    squares.append(x ** 2)

print("Using loops:", squares)

'''Using list comprehensions with lambda and map
'''

squares = list(map(lambda x: x ** 2, range(10)))
print("Using map & Lambda:", squares)

'''Using for loop comprehension
'''

squares = [x ** 2 for x in range(10)]
print("Using for loop comprehension:", squares)
