#!/bin/bash

if [ ! -d “$2” ]; then
  mkdir -p  /Users/achourryad/Documents/github/Scripting/$2
fi
 ./genTick $1 | ./genSensorData 2>>$2/$3 >>$2/$4
