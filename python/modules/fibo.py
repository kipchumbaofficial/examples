#!/usr/bin/python3
'''
Fibonacci module
'''


def fib(num):
    a, b  = 0, 1
    while a < num:
        print(a, end=' ')
        a, b = b, a + b
    print()

def fib2(num):
    result = []
    a, b = 0, 1
    while a < num:
        result.append(a)
        a, b = b, a + b
    return result
