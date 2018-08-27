#!/bin/bash

DIR=`ls $PWD`
CMAKECACHE="CMakeCache.txt"
CMAKEFILE_DIR="CMakeFiles"
for var in $DIR
do
	if [ -f $var -a $var == $CMAKECACHE ];then
		echo "find file is $var"
		rm $var
	elif [ -d $var ];then
		if [ $var == $CMAKEFILE_DIR ];then
			echo "find dir is $var"
			rm -r $var
		else
			rm -r $var/$CMAKEFILE_DIR
			rm -r $var/build
			rm $var/$CMAKECACHE
		fi
	fi

done




