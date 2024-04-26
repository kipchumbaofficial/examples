#!/usr/bin/env python3
'''POST to a URL
'''
from urllib import parse, request

url = 'https://pythonprogramming.net/search/'
query = {'q': 'basic'}
querystring = parse.urlencode(query)
print(querystring)

req = url + '?' + querystring
print(req)
resp = request.urlopen(req)

print(resp.code)
print()
print(resp.read())
