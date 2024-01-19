#!bin/bash
wget -P tmp https://github.com/m-ohammed45/alx-low_level_programming/raw/master/0x18 C - Dynamic libraries/libgiga.so
export LD_PERLOAD=/tmp/libgiga.so
