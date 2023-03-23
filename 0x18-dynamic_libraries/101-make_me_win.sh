#!/bin/bash
wget -P /tmp/ https://raw.github.com/michaelhpet/alx-low_level_programming/main/0x18-dynamic_libraries/libantirand.so
export LD_PRELOAD=/tmp/nrandom.so
