#!bin/bash

gcc -c ./src/arith.c -o ./object/arith.o
gcc -fpic -shared ./object/arith.o -o ./lib/libpen.so
#mv calculator.c ./src/
gcc ./src/calculator.c ./lib/libpen.so -o ./binary/calc
cp ./lib/libpen.so /usr/lib
cp ./binary/calc /usr/bin
