#!/usr/bin/python3
from typing import TypeVar, List

T = TypeVar('T')

def get_element(elements: List[T]):
    return elements[0]

print(get_element([1, 2, 3, 4, 5]))
print(get_element(['Victor', 'Kevin']))
print(get_element([1, 'Newton']))
