#!/bin/bash

ls *.xml > list

for i in `cat list`; do cp "$i" "$i".bak; done
