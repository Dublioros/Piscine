#!/bin/bash
FT_LINE1=7
FT_LINE2=15

cat /etc/passwd \ sed '/^#/d' | awk 'NR % 2 == 0' | cut -d ':' -f 1 | rev | sort | sed  -n  "${FT_LINE1},${FT_LINE2}p" | paste -sd ',' - | sed 's/$/./'
