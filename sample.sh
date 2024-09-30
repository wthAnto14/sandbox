#!/bin/sh
binfolder="bin"
samplename="sample" # can be updated to have other samples

if ! [ -d "$binfolder" ];then
	mkdir -v bin
fi

echo -n "Compiling in $binfolder/$samplename..."
gcc "$samplename.c" src/asciiart.h -o "$binfolder/$samplename"
echo "DONE"
