// player1.h: player 1 agent.
// Author:    <your name>
// Date:	  <date>
// MS Visual C++
#ifndef PLAYER1_H
#define PLAYER1_H

#include "constants.h"
#include "state.h"
#include "player.h"
#include "player2.h"
#include <cmath>

unsigned long int stringToLInt(char* input);
unsigned long int expt(unsigned long int a, unsigned long int x);

class Player1 : public Player
{
private:
    unsigned long int stateMove; // should innitialize to 0 on its own

public:
    Player1() { stateMove = 0; } // for older c++ compliance
	Move get_move(unsigned short p, board game_board);
    Move bot_move(unsigned short p, board game_board);
};


Move Player1::get_move(unsigned short p, board game_board)
{
    Move move;
     
    move.player = p;
    
    if (gettype()) {
        cout << "Enter move (old_x old_y new_x new_y): ";
    	cin >> move.src_x;
    	cin >> move.src_y;
    	cin >> move.dst_x;
    	cin >> move.dst_y;
    }
    else {
        return bot_move(p,game_board);
    }
    
}

Move Player1::bot_move(unsigned short p, board game_board)
{
    Move move;
    move.player = p;

    // state -> stateMove
    unsigned long int stateMovetemp = 0;
    for (int i = 0 ; i < XYDIM ; i++)
        for (int j = 0 ; j < XYDIM ; j++)
        {
            stateMovetemp += game_board.layout[i][j];
            stateMovetemp *= 10;
        }
    stateMovetemp *= 1000;

    // write valid moves to personal file
    static int round = 1;
    char output[] = "player1.log";
    ofstream fout;
    fout.open(output, std::ios::app); //for appending to file
    if (!fout.good())
    {
        cout << "(state,move) player1.log file error\n";
        exit(1);
    }
    if (!(round == 1) && (stateMove/10000 != stateMovetemp/10000))
    {
        fout << stateMove << endl; 
        round++;
    }
    stateMove = stateMovetemp;
    if (round == 1) round++;

    // compare to file
    char input[] = "win_moves";
    ifstream fin(input);
    if (!fin.good())
    {
        cout << "(state,move) file error\n";
        exit(1);
    }

    char buffer[20] = {0};
    unsigned long int fileLine;

    while (!fin.eof() && fin.good()) 
    {
        fin >> buffer;
        fileLine = stringToLInt(buffer);
        if (fileLine/10000 == stateMove/10000) //found move
        {
            stateMove = fileLine;
            break; // break out of while
        }
        else // clean, if eof: this is the check for not finding move
            fileLine = 0;
    }

    while (1) 
    {
        // if move does not exist in file
        if (fileLine == 0) 
        { /* random */ 
        	move.src_x = rand() % XYDIM;
        	move.src_y = rand() % XYDIM;
        	move.dst_x = rand() % XYDIM;
        	move.dst_y = rand() % XYDIM;

            // add
            stateMove -= stateMove % 10000;

            stateMove += move.src_x * 1000;
            stateMove += move.src_y * 100;
            stateMove += move.dst_x * 10;
            stateMove += move.dst_y * 1;
            // check if move is valid
            //if (validmove(stateMove))
                break;
        } else 
        { /* do move */ 
        	move.src_x = (stateMove % 10000)/1000;
        	move.src_y = (stateMove % 1000)/100;
        	move.dst_x = (stateMove % 100)/10;
        	move.dst_y =  stateMove % 10; 

            stateMove -= stateMove % 10000;

            stateMove += move.src_x * 1000;
            stateMove += move.src_y * 100;
            stateMove += move.dst_x * 10;
            stateMove += move.dst_y * 1;

            break;
        }
    } 

    return move;
}


int intLog(int base, int x)
{
    return int(log(x)/log(base));
}
        

/****************************************************************
| Name: stringToInt
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  char* string
|   Out: none
|   
| Returns: an int from the user
\****************************************************************/
unsigned long int stringToLInt(char* input) 
//char* assumed to come from main argv which has a lot of space on it
{
    /* for flag if number is too big for current architexture */
    const int arrayMax = 20; //intLog((pow(2, sizeof(long)*8)), 10)+1; 

    int Rows = 0;

    /* get size of input array, minus null terminator */
    int arraySize = 0;
    while (input[arraySize++] != '\0'); 
    arraySize--;
    
    if (arraySize > arrayMax)
    {
        cout << "\nSmaller number please\n";
        exit(1);
    }

    /* transfer to int */
    /* if negative */
    if (input[0] == '-')
    {
        for (int i = 1 ; input[i] != '\0' ; i++)
        {
            if (input[i] <= '9' && input[i] >= '0')
            {
                Rows += int(input[i] - '0');
                Rows *= 10; 
            }
            else 
            {
                cout << "\nError: non-number\n";
                exit(1);
            }
        }
        Rows /= 10;
        Rows *= -1;
        return Rows;
    }
    /* if positive */
    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        if (input[i] <= '9' && input[i] >= '0')
        {
            Rows += int(input[i] - '0');
            Rows *= 10; 
        }
        else 
        {
            cout << "\nError: non-number\n";
            exit(1);
        }
    }
    return Rows /= 10;
}

unsigned long int expt(unsigned long int a, unsigned long int x)
{
    int t = a;
    for (int i = 2 ; i <= x-1 ; i++)
    {
        a = a * t;
    }
    return a;
}

#endif
