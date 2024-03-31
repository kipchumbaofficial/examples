#!/usr/bin/python3

'''Print elements
'''


def print_list_integer(my_list=[]):
    if len(my_list) != 0:
        for num in my_list:
            print("{:d}".format(num))
