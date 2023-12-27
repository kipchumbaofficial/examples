#!/usr/bin/env bash

file="5-example.txt"

while read -r line;
do
    echo $line
done < "$file"
