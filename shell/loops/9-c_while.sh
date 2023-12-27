#!/usr/bin/env bash

# C-style while loop

a="0"

while (($a <=  12))
do
    echo $a
    ((a+=2))
done
