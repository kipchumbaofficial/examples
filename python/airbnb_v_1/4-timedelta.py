#!/usr/bin/python3
"""
simple use case of timedelta
"""
from datetime import timedelta


delta = timedelta(
        days=50,
        seconds=27,
        microseconds=10,
        milliseconds=29000,
        minutes=5,
        hours=8,
        weeks=2
        )
print(delta)
