#!/usr/bin/python3

'''More on list comrehensions
'''

vec = [-4, -2, 0, 2, 4]

'''Creating a new list with values doubled
'''
vec_double = [x * 2 for x in vec]
print(vec_double)

'''Filter the list to remove negative values
'''
vec_abs = [x for x in vec if x >= 0]
print(vec_abs)

'''Apply a function for all members
'''
vec_abs = [abs(x) for x in vec]
print(vec_abs)

'''Calling a function on all elements
'''
fresh_fruits = [' Banana', ' Loganberry ', 'Passion fruit ']
print(fresh_fruits)
string = [weapon.strip() for weapon in fresh_fruits]
print("Stripped:", string)

'''Creating a tuple of all values
'''
vec_tuple = [(x, x ** 2) for x in vec]
print(vec_tuple)

'''Flatten a list of list
'''
vec_list = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
list_from = [x for element in vec_list for x in element]
print(list_from)
