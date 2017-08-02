#!/bin/bash

read -p "Enter N: " N

shopt -s extglob # needed for extended patterns

case $N in
    ?(-)*([0-9])[02468])
        ntype="even"
    ;;
    ?(-)*([0-9])[13579])
        ntype="odd"
    ;;
    *)
        ntype="NaN"
    ;;
esac

echo "$N is $ntype"
