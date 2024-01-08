#!/usr/bin/python3
"""Robot class
"""


class Robot:
    """A robot with a name and some functionality
    Population is a class variable
    """

    population = 0

    def __init__(self, name):
        """Initializing"""
        self.name = name
        print(f"Initializing {self.name}...")

        Robot.population += 1

    def die(self):
        """Killing the robot"""
        print(f"{self.name} is being destroyed...")
        Robot.population -= 1

        if Robot.population == 0:
            print(f"{self.name} was the last one :(")
        else:
            print(f"There are {Robot.population} remaining :)")

    def say_hi(self):
        """Hello from robot"""
        print(f"Greetings! My master calls me {self.name} :)")

    @classmethod
    def how_many(self):
        """Robot population"""
        print(f"Robot's population is {Robot.population}")

droid1 = Robot("R2-D2")
droid1.say_hi()
Robot.how_many()

droid2 = Robot("CP_369")
droid2.say_hi()
Robot.how_many()

droid3 = Robot("VK-1738")
droid3.say_hi()
Robot.how_many()

print("Robot Wars!...")

droid1.die()
Robot.how_many()
