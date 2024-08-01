#!/usr/bin/python3
from typing import Callable

IntBinaryOp = Callable[[int, int], int]

def operate(operation: IntBinaryOp, a: int, b: int) -> int:
    return operation(a, b)

def addition(x: int, y: int) -> int:
    return (x + y)

def multiply(x: int, y: int) -> int:
    return (x + y)

num1 = int(input('Enter the first number: '))
num2 = int(input('Enter the second number: '))
print(f'Sum of {num1} and {num2} is {operate(addition, num1, num2)}')
print(f'Product of {num1} and {num2} is {operate(multiply, num1, num2)}')

print('This results in an error because of callable mismatch')
def divide(x: float, y: float) -> float:
    return x / y
print(f'Quotient of {num1} and {num2} is {operate(divide, num1, num2)}')
