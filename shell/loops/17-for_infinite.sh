#!/usr/bin/env bash

n="0"

for (( ; ; ));
do
    if [ $n -eq "9" ]
    then
        break
    fi
    echo "$n"
    ((n++))
done
