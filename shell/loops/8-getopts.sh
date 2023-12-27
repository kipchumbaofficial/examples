#!/usr/bin/env bash

while getopts n:a: OPT;
do
    case "${OPT}"
    in
        n) name=${OPTARG};;
        a) age=${OPTARG};;
        *) echo "Invalid option"
           exit 1;;
    esac
done

printf "My name is $name, I'm $age years old\n"
