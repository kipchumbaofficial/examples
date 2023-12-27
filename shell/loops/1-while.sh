#!/bin/bash

# opens 4 terminal windows

i="0"

while [ $i -lt 4 ]
do
    xterm &
    i=&(($i+1))
done
