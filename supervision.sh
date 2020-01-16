#!/bin/bash
	./generation.sh $1 $2 $3 $4 $5
if [ $USER == "achourryad" ]
then
	sizePs=$(ps aux | grep -c generation.sh)
	if [ "$#" -eq "0" ]
	then
		echo " aucun argument soumis " 
	elif [ $sizePs -lt "2" ]
	then
		echo "generation n'a pas été charger "
	else
			fileSize=$(stat -f %z $4)
			echo " taille : $fileSize "
			if ! [[ $fileSize =~^[0-9]+$ ]]
			then
				echo " le fichier $fileSize n'existe pas "
			elif [ $fileSize -gt $5 ]
			then
				echo " $fileSize est plus grand que $5 "
		fi
	fi
fi
