#!/bin/bash
wget -O /tmp/win.so https://github.com/Zevrov/alx-low_level_programming/raw/main/0x17-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
