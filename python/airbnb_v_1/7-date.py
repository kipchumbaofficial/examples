#!/usr/bin/python3
"""
todays date
"""
from datetime import date


today = date.today()
print(today)
print(today.replace(year=2002))
print(today.weekday())
print(today.isoweekday())
print(today.isocalendar())
print(today.isoformat())
print(today.ctime())
