#!/bin/bash
gcc -c -fipc *.c
gcc -shared -o liball.so *.o
