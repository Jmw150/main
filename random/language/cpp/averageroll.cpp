#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mainlib.cpp"

int main (int argc, char* argv[])
{
    int sum = 0;
    int2 dice;
    int totalDice = 0;

    for (int i = 1 ; i < argc ; i++)
    {
        dice = parseDice(argv[i]); 
        sum += sumDiceRoll(dice.a, dice.b);
        totalDice += dice.a;
    }
    double average = double(sum)/totalDice;

    printf("%f\n", average);
    
    return 0;
}

