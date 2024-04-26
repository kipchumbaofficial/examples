#!/usr/bin/env python3
'''Saving a temporary file syntax
tempfile.NamedTemporaryFile: Returns a temporary file
shutil.copyfileobj: Copies the response of urlopen to temp file
'''
import shutil
import tempfile
import urllib.request

with urllib.request.urlopen('https://python.org/') as response:
    with tempfile.NamedTemporaryFile(delete=False) as tmp_file:
        shutil.copyfileobj(response, tmp_file)

with open(tmp_file.name) as html:
    pass
