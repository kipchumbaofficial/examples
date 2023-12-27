#!/usr/bin/env bash

i="1"

while :
do
    echo $i
    if [ $i -eq "20" ];
    then
        echo "End of the loop"
        break
    fi
    ((i++))
done
