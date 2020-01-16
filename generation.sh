#!/bin/bash

if [ ! -d “$2” ]; then
  mkdir -p  $HOME/$2
fi
if [ $USER == "achourryad" ]
then
 ./genTick $1 | ./genSensorData 2>>$HOME/$2/$3 >>$HOME/$2/$4  

else
 echo "Vous n'etes pas abilité à executer ce script"
fi


# when i execute log.txt | stdbuf -oL cut -d , -f1,2,3,6 everything is ok but when i run the script the cut isn't exec
