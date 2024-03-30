#!/usr/bin/python3

'''Creating a list of tuples with values
    from a list which are not equivalent
'''
comp = []
for x in [1, 2, 3]:
    for y in [3, 1, 4]:
        if x != y:
            comp.append((x, y))
print("For loops", comp)

'''Equivalent list comprehension
'''
comp = [(x, y) for x in [1, 2, 3] for y in [3, 1, 4] if x != y]
print("List comprehension", comp)
