#!/usr/in/python3
'''
Parent class
'''

class Person(object):
    def __init__(self, name, idnumber):
        self.name = name
        self.idnumber = idnumber

    def Display(self):
        print(self.name)
        print(self.idnumber)

'''
Child class
'''


class Employee(Person):
    def __init__(self, name, idnumber, salary, post):
        self.salary = salary
        self.post = post

        Person.__init__(self, name, idnumber)


a = Employee("Kipchumba", 112, 50000, "intern")

a.Display()
