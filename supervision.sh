#!/bin/bash
fileSize=expr $(ls -l |  grep log | tr -s ' ' | cut -d " " -f5)
a=1000
if [ $USER == "achourryad" ]
then
	sizePs=$(ps aux | grep -c generation.sh)
	if [ "$#" -eq "0" ]
	then
		echo " aucun argument soumis " 
	# elif [ $sizePs -lt "2" ]
	# then
	# 	echo "generation n'a pas été charger "
	elif [ "$fileSize" -gt $a ]
	then
		echo " le fichier est trop grand" 
	else
		echo " tout est $1"
#	else
#			fileSize=$(stat -f %z $4)
#			echo " taille : $fileSize "
#			if ! [[ $fileSize =~^[0-9]+$ ]]
#			then
#				echo " le fichier $fileSize n'existe pas "
#			elif [ $fileSize -gt $5 ]
#			then
#				echo " $fileSize est plus grand que $5 "
#		fi
	fi
fi
