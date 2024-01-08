#!/usr/bin/python3
"""
__init__ method example
"""

class Person:
    """Performs initialization on instatiation
    """
    def __init__(self, name):
        self.name = name

    """Says hi
    """
    def say_hi(self):
        print(f"Hello {self.name}")

person1 = Person('Victor')
person1.say_hi()
