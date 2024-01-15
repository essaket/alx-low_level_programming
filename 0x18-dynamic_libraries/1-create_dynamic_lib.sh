#!/bin/bash
gcc -c -fpic *.c
gcc -shared *.c -o liball.so
