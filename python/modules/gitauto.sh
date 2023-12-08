#!/bin/bash

# Stage all the chages
git add .

# Commit all the chages
echo "Enter the commit message"
read commitMessage

git commit -m "$commitMessage"

#push changes
git push
