#!/usr/bin/python3
from typing import Generic, TypeVar

T = TypeVar('T')

class Box(Generic[T]):
    def __init__(self, content: T):
        self.content = content

    def get_content(self) -> T:
        return self.content


int_box = Box(123)
str_box = Box("Hello")

print(int_box.get_content())
print(str_box.get_content())
