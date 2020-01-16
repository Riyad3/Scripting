#!/bin/bash

ls -l |  grep log | tr -s ' ' | cut -d " " -f5 
