#!/usr/bin/python3

# Python keyword arguments

def cheese_shop(kind, *arguments, **keywords):
    print("--Do you have any", kind, "?")
    print("--I'm sorry, we're all out of", kind)
    for arg in arguments:
        print(arg)
    print("-" * 40)
    for kw in keywords:
        print(kw, ":", keywords[kw])

cheese_shop("Limburger", "Its very runny, sir", "Its really very, Very runny, sir.", 
            shopkeeper="Michael Palin",client="John Cleese", sketch="Cheese Shop Sketch")
