#!/usr/bin/python3

# Function definition to return fibonacci series

def fibonacci(n):
    retval = []

    a, b = 0, 1

    while a < n:
        retval.append(a)
        a, b = b, a + b
    return retval

num = int(input("Enter a whole number: "))
fib = fibonacci(num)
print(fib)
