#!/usr/bin/python3
'''
Json encoding
'''

import json
from json import JSONEncoder
class Student:
    def __init__(self, name, roll_no, address):
        self.name = name
        self.roll_no = roll_no
        self.address = address

class Address:
    def __init__(self, city, street, pin):
        self.city = city
        self.street = street
        self.pin = pin

class EncodeStudent(JSONEncoder):
    def default(self, o):
        return o.__dict__


address = Address("Nairobi", "Tom Mboya", 20314)
student = Student("Malia", 3, address)

student_json = json.dumps(student, indent=4, cls=EncodeStudent)
print(student_json)
print(type(student_json))

"""
decoding
"""
stude = json.loads(student_json)
print()
print(stude)
print(type(stude))
