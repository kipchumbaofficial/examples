#!/usr/bin/env python3
'''Simplest form of Request object
'''
import urllib.request

req = urllib.request.Request('https://python.org/')
with urllib.request.urlopen(req) as response:
    html = response.read()
