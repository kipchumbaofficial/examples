#!/usr/bin/python3
'''
Use of *args
'''

def test_args(f_arg, *args):
    print(f"Normal Variable: {f_arg}")

    for arg in args:
        print(f"Another variable via *args: {arg}")
    print()
test_args("Banana", "Apple", "Avocado", "Orange")
