#!/bin/bash

N=10
sum=0

for i in $(seq $N); do
    let "sum=sum+i"
done

echo "1 + 2 + ... + $N = $sum"
