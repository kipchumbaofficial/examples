#!/usr/bin/python3

letters = ['a', 'b', 'c', 'd']
print("Letters:",letters)
letters.append('e')
print("Appended:", letters)
letters.extend(['e', 'f', 'g', 'h', 'j', 'k'])
print("Extended:", letters)
letters.insert(1, 'B')
print("Inserted 'B':", letters)
letters.remove('B')
print("Removed 'B':", letters)
letter = letters.pop()
print("Popped:", letters)
print("Popped letter:", letter)
letters2 = letters[:]
letters.clear()
print("Cleared:", letters)
index = letters2.index('h')
print("Index of h:", index)
count = letters2.count('e')
print("e appears", count, "times")
letters2.sort(key=None, reverse=True)
print("Letters sorted in reverse:", letters2)
letters3 = letters2.copy()
letters2.reverse()
print("Letters reversed:", letters2)
print("Reversed copy:", letters3)