#!/usr/bin/python3
'''
Addition function
'''


def add(a, b):
    """
    >>> add(9.5, 9)
    18
    
    >>> add(1, 2)
    3
    
    >>> add(a, b)
    Traceback (most recent call last):
     ...
    NameError: name 'a' is not defined
    
    >>> add(True, Talse)
    Traceback (most recent call last):
     ...
    NameError: name 'Talse' is not defined
    
    >>> add(True, False)
    1

    >>> add('a', 'b')
    Traceback (most recent call last):
     .....
    ValueError: invalid literal for int() with base 10: 'a'

    """
    return int(a) + int(b)
