#!/usr/bin/python3
"""
Checks days to birthday
"""
import time
from datetime import date


today = date.today()
print(f"Today is on: {today}")
my_birthday = date(today.year, 6, 4)
print(f"My birthday is on: {my_birthday}")
if my_birthday < today:
    my_birthday = my_birthday.replace(year=today.year + 1)

time_to_birthday = abs(my_birthday - today)
print(f"Days to my birthday: {time_to_birthday.days}")
