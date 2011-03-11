#!/bin/bash

PROJECT=plugin-mainmenu

#OPTS="-noobsolete" 

if [ "$1" = "" ]; then
    TS_FILE=${PROJECT}_`echo $LANG | awk -F"." '{print($1)}'`.ts
else
    TS_FILE=$1
fi



lupdate ${OPTS} ../*.h ../*.cpp -ts ${TS_FILE}  && \
linguist ${TS_FILE}
