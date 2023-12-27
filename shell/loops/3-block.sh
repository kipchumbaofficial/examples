#!/bin/bash

set -x

device0="/dev/sda2" # root directory

if  [ -b "$device0" ]; then
    echo "$device0 is a block device" > l
fi
