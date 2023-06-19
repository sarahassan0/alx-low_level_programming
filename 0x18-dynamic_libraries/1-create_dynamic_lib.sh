#!/bin/bash
gcc -c -fpic -o *.c
gcc -shared -o liball.so *.o
