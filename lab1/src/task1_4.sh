#!/bin/sh
for ((i=0;i<150;i++))
do
    echo  "$(od -An -N1 -d /dev/random)">> numbers.txt
done