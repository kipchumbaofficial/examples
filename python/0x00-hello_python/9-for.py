#!/usr/bin/python3

words = ['Cat', 'Lion', 'Dog', 'Tiger']

for word in words:
    if word == 'Cat':
        continue
    else:
        print(f'{word} belongs to dog family')
