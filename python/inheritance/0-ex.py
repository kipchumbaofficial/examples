#!/usr/bin/python3

class Person(object):
    def __init__(self, name, iden):
        self.name = name
        self.iden = iden

    def display(self):
        print(self.name, self.iden)

emp = Person("Satyam", 102)
emp.display()


class Emp(Person):
    def Print(self):
        print("emp class called")


emp_details = Emp("Victor", 1)
emp_details.display()
emp_details.Print()
