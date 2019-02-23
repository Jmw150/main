#!/bin/bash

# genombot.sh [num test]
p1=0
p2=0

i=1
while [ $i -le $1 ]
do
    echo "round $i"
    ./bot 
    i=$(( $i + 1 ))

    a=$(cat winner)
    if [ "$a" == "1" ]
    then
        sort player1.log | uniq -u >> win_moves_player1
        rm player1.log
        touch player1.log
        p1=$(( $p1 + 1 ))
    else
        sort player2.log | uniq -u >> win_moves_player2
        rm player2.log
        touch player2.log
        p2=$(( $p2+ 1 ))
    fi
    sort win_moves_player1 | uniq -u >> temp 
    cp temp win_moves
    rm temp
done

echo "player1: $p1"
echo "player2: $p2"

