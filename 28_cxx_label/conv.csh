#! /bin/csh -vxf

sed -e 's/a\.s:[0-9]*/a.s:XX/' $argv[1] > $argv[1].$$
mv $argv[1].$$ $argv[1]

