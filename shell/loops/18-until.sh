#!/usr/bin/env bash

i="10"

until ((i == 1))
do
    echo "$i is not equal to 1"
    ((i--))
done
