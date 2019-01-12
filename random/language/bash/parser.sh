#!/bin/bash

# gives functions, that would otherwise only work on one program at a time, the ability to work on the whole file.

# parser program extention

ls * | while read line
do
    $1 $line 
done
