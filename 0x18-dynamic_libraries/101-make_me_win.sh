#!/bin/bash
wget -P /tmp https://github.com/essaket/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmake_me_win.so
export LD_PRELOAD=/tmp/libmake_me_win.so
