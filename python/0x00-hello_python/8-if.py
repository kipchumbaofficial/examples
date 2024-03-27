#!/usr/bin/python3

x = int(input("Please input an integer: "))

if x < 0:
    x = 0
    print("Negative converted to zero")
elif x == 0:
    print("Zero")
elif x == 1:
    print("Single :(")
elif x == 2:
    print("Taken :)")
else:
    print("More! ^^")
