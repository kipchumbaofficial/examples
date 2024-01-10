#!/usr/bin/python3
"""
More uuid
"""
import uuid


id = uuid.uuid1()
print("Representation of uuid are: ")
print(f"Bytes representation: {repr(id.bytes)}")
print(f"Integer representation: {id.int}")
print(f"Hexadecimal reresentation: {id.hex}")
print("---")
print()

print("Components of uuid1() are: ")
print(f"Version: {id.version}")
print(f"Variant: {id.variant}")
print("---")
print()

print("Fields of uuid1() are: ")
print(f"Fields: {id.fields}")
print("---")
print()

print("Time comonent of uuid1(): ")
print(f"Time component: {id.node}")
