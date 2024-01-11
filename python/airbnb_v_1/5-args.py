#!/usr/bin/python3
"""
Python *args
"""

def test_func(f_arg, *args):
    print(f"First normal arg vi f_arg: {f_arg}")

    for arg in args:
        print(f"Another argument vi *args: {arg}")

test_func('Victor', 'Anxiety', 'Panic', 'Love', 'Overthinking')
