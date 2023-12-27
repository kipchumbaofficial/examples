#!/usr/bin/env bash

i="1"

while [ $i -le 30 ]
do
    ((i++))
    if [[ $(( $i % 5 )) -ne 0 ]]
    then
        continue
    fi
    echo $i
done
