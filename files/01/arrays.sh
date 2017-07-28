#!/bin/bash

array=( zero one two three four )
array[5]=five

len=${#array[@]}

echo "0 -> ${array[0]}"

for i in $(seq 1 $[ $len - 1 ] ); do
    echo "$i -> ${array[i]},
        prev = ${array[$[ $i - 1 ]]}"
done
