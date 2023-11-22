#!/usr/bin/python3
'''
converts radians to degrees
'''


import math
def radians_to_degrees(rads):
    if not isinstance(rads, (int, float)):
        raise ValueError("Parameter must be float or integer")
    else:
        return (rads * 180 / math.pi)
