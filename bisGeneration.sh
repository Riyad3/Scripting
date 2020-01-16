#! /bin/bash

if [ ! -d "$2" ] 
then
	mkdir -p /Users/achourryad/Documents/github/Scripting/$2
fi
if [ $USER == "achourryad" ]
then
	./bisGenTik $1 | ./genSensorDataBis 2>>$2/$3 >>$2/$4
else
	echo " Nop pas pour toi "
fi 
