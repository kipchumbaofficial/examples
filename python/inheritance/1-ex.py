#!/usr/bin/python3
'''
Parent class
'''

class Person(object):
    def __init__(self, name):
        self.name = name

    def getName(self):
        return self.name

    def isEmployee(self):
        return False


'''
Child class
'''


class Employee(Person):
    def isEmployee(self):
        return True

emp = Person("Victor")
print(emp.getName(), emp.isEmployee())

emp = Employee("Kipchumba")
print(emp.getName(), emp.isEmployee())
