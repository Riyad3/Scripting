#! /bin/bash

if [ ! -d "$2" ] 
then
	mkdir -p $HOME/$2
fi
if [ $USER == "achourryad" ]
then
	./bisGenTik $1 | ./genSensorData 2>>$HOME/$2/$3 >>$HOME/$2/$4
else
	echo " Nop pas pour toi "
fi 
