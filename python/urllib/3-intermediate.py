#!/usr/bin/env python3
'''Examples from:
    sendtex
'''
from urllib import request

with request.urlopen('https://www.google.com') as google:
    html = google.read()
    print(html)
