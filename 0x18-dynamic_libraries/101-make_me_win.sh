#!/bin/bash
wget -P /tmp https://github.com/mrxdoffical/alx-low_level_programming/0x18-dynamic_libraries/archive/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so