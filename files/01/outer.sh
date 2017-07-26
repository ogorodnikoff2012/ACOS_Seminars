#!/bin/bash

foo=42
echo "Shell variable foo = $foo"
./inner.sh

export foo=42
echo "Environment variable foo = $foo"
./inner.sh

