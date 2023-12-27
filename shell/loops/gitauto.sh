#!/bin/bash

# Staging changes
git add .

# Reading the commit messge
echo "Enter the commit message"
read -r commitMessage

# Commit changes
git commit -m "$commitMessage"

# Push to remote
git push

