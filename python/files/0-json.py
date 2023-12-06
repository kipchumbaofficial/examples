#!/usr/bin/python3
'''
JSON encoding
'''


import json

py_object = {"c" : 0, "b" : 0, "a" : 0}

json_string = json.dumps(py_object)

print(json_string)
print(type(json_string))

'''
JSON decoding
'''

py_obj = json.loads(json_string)
print()
print(py_obj)
print(type(py_obj))
