#!/usr/bin/python3
"""Simple cmd to say hello
"""
from cmd import Cmd


class Hello(Cmd):
    """Class to hold commands"""
    def do_hello(self, arg):
        """Says Hello followed by name"""
        if len(arg) == 0:
            name = 'Stranger'
        else:
            name = arg
        print(f"Hello {name} :)")

    def do_quit(self, arg):
        """Quits the program"""
        print("Quiting")
        raise SystemExit

if __name__ == "__main__":
    hello = Hello()
    hello.prompt = ':) '
    hello.cmdloop("Welcome...")

