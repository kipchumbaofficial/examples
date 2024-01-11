#!/usr/bin/python3
"""
Python **kwargs
"""


def list_it(arg, **kwargs):
    print(f"Normal one: {arg}")

    for key, value in kwargs.items():
        print(f"Key-Value pairs: {key} -> {value}")
list_it('List', name='Victor', age=23, career='SWE', location='Nairobi')
