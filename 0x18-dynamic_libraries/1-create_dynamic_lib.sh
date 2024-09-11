#!/bin/bash
wget -P /tmp https://github.com/HossamHassan70/alx-low_level_programming/blob/6dd4fa07fbb0d549dc9de6529fa8f8c7d14108c1/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so

