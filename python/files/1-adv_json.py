#!/usr/bin/python3
'''
Encoding custom objects
'''


import json
class Student:
    def __init__(self, name, roll_no, address):
        self.name = name
        self.roll_no = roll_no
        self.address = address

    def to_json(self):
        return json.dumps(self, indent=4, default=lambda o: o.__dict__)


class Address:
    def __init__(self, city, street, pin):
        self.city = city
        self.street = street
        self.pin = pin

address = Address("Nairobi", "Moi", "20314")
student = Student("Travis", 1, address)


student_json = student.to_json()
print(student_json)
print(type(student_json))


'''
Decoding
'''

stude = json.loads(student_json)
print()
print(stude)
print(type(stude))
