#!/bin/bash

# Check if the commit message is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <commit_message>"
    exit 1
fi

# Navigate to your repository directory
cd /d/Placement/SELF/CODING/DSA/Leetcode

# Add all changes to the staging area
git add .
current_date=$(date +"%Y-%m-%d %H:%M:%S")
# Commit changes with the provided commit message
git commit -m "$1: $current_date"

# Push changes to the remote repository (assuming origin and main branch)
git push origin main

echo "Changes pushed to GitHub with commit message: $1: $current_date"
