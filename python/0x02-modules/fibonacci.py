#!/usr/bin/env python3

# Fibonacci series

def fibonacci(num):
    retval = []
    a, b = 0, 1
    while a < num:
        retval.append(a)
        a, b = b, a + b
    return retval

# Prints fibonacci series

def fib(num):
    a, b = 0, 1
    while a < num:
        print(a, end="")
        a, b = b, a + b
    print()
