#!/bin/bash

# gives functions, that would otherwise only work on one program at a time, the ability to work on the whole file.

ls * | while read line
do
    encrypt $line $line.encr
done
