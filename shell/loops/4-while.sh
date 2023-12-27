#!/usr/bin/env bash

a="7"

while [ $a -gt "1" ]
do
    echo $a
    ((a--))
done
