#!/usr/bin/python3

# Demonstrating default values in a function arguments

def ask_ok(prompt, retries=4, reminder="Please try again"):
    while True:
        reply = input(prompt)
        if reply in {'y', 'ye', 'yes'}:
            print("You quit!")
            return True
        elif reply in {'n', 'no', 'nop', 'nope'}:
            print("Continuing :)")
            return False
        retries -= 1
        if retries < 0:
            raise ValueError("Invalid input")
            return
        print(reminder)

ask_ok("Do you realy want to quit?")
