#!/bin/bash

SCORE="0"
AVERAGE="0"
SUM="0"
NUM="0"

while true; do
    echo "Enter your score [0 - 100%] ('q' for quit): "; read SCORE;

    if (("$SCORE" < "0")) || (("$SCORE" > "100")); then
        echo "Be Serious! Common, try again: ";
    elif [ "$SCORE" == "q" ]; then
        echo "Average Rating: $AVERAGE%"
        break
    else
        SUM=$[$SUM + $SCORE]
        NUM=$[$NUM + 1]
        AVERAGE=$[$SUM / $NUM]
    fi
done
echo "Exiting"
