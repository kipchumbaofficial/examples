#!/usr/bin/python3

'''Tuple example
'''
'''Empty tuples
'''
empty_tuple = ()
print(f"Length = {len(empty_tuple)} for {empty_tuple}")

'''Tuple with a single item
'''
singleton = 1234,
print("Singleton: ", singleton)
'''Basic tuple
'''
basic_tuple = 1234, 5678, 'Hello!'

print(basic_tuple)

'''Tuples can be indexed
'''
print("At index 0:", basic_tuple[0])

'''Tuples maybe nested
'''
new_tuple = 'ALX', 'Build', 'Upwork', 'Cash',  basic_tuple
print("Nested tuple:", new_tuple)

'''Tuples are iimutable but can contain mutalbe data
'''
tuple_list = [1, 2, 3], [4, 5, 6]
print(tuple_list)

'''Unpacking a tuple
'''
print("Using sequence unpacking: list1, list2 = tuple_list")
list1, list2 = tuple_list
print(list1)
print(list2)
