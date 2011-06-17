#!/bin/bash
# -
#. ./script_conf
#. ./script_functions.sh


toLower() {
echo $1 | tr "[:upper:]" "[:lower:]"
}

toUpper() {
echo $1 | tr  "[:lower:]" "[:upper:]"
}

LOWER=$(toLower $1)
UPPER=$(toUpper $1)
cp -rf BASEMODULE lib$LOWER
cd lib$LOWER
sed -i.bak -e "s/BASEMODULE/$UPPER/" BASEMODULE.*
sed -i.bak -e "s/BASEMODULE/$LOWER/" CMakeLists.txt
mv BASEMODULE.c $LOWER.c
mv BASEMODULE.h $LOWER.h
echo $LOWER $UPPER
