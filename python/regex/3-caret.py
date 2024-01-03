#!/usr/bin/python3
"""
Using caret in RegEx
"""
import re


regex = r'^The'
strings = ['The Best School', 'The Cool school', 'The ALX Africa', 'Powered by Holberton']
for string in strings:
    if re.match(regex,string):
        print(f'Matched: {string}')
    else:
        print(f'Not matched: {string}')
