#!/bin/bash
./genTick $1 | ./genSensorData 2> $2 > $3
