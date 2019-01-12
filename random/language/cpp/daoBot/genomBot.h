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
//#include "Dao.h" // no conditional compilation

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

    // let the player know what is valid
    bool validmove(unsigned long int stateMove); 
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
    char input[] = "state_move";
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
        if (fileLine <= stateMove && stateMove < fileLine + 10000) // found move
        {
            stateMove = fileLine;
            break; // break out of while
        }
        else // clean, if eof: this is the check for not finding move
            fileLine = 0;
    }

/*
        // debug check
        cout << (stateMove % 10000)/1000 << endl;
        cout << (stateMove % 1000)/100 << endl;
        cout << (stateMove % 100)/10 << endl;
        cout << stateMove % 10 << endl;
*/
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

/*
procedure idea: 
tight coupled program generated generationally,
moves are probabilistic but influenced by past success

stage 1: (rough graph generation)
if move exists, do that, else do random move and record if it is valid

stage 2:
take winner (state, move) list and write it over other list

stage 3:
goto stage 1;

have it beat random, then do against itself and random


each move gets encoded to its own file like so
game state : piece direction
[0..2]*4*4 : [0..3] [WNES]
1200 0000 1100 2122 : 1 S

only mutate the last 2 digits

*/




/*
The moves are a 0 indexed x/y like so

    0  1  2  3

0   1  0  0  2
1   0  1  2  0
2   0  2  1  0
3   2  0  0  1

how to get game state?

So the first thing on the list was to make a random agent. It seems
like the "Hello, World!" of ai bots. :)

Next was to make methods to analyse the graph of the game. By my
calculation the whole graph could be stored in memory. And this game
is supposedly solved. So I think it is better to search for the
solution and leave learning algorithms to another week.

random changes:
generalized board to n x n instead of 4 x 4

*/

        // encode 
        //while (!fin.eof());
           
        // does state have a listed move?
            
        // check if move is on list


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

// broken for some reason
bool Player1::validmove(unsigned long int stateMove)
{
    cout << stateMove << endl;

    // stateMove -> state
	State state; 
    int index = 16 + 4;
	for (int row = 0; row < XYDIM; row++)
		for (int col = 0; col < XYDIM; col++)
        {
            state.setloc(row,col, 
               (stateMove % expt(10,index+1))/expt(10,index));
            index--;
        } // works except for location 16
    int first = stateMove / 10000000000000000000;
    state.setloc(0,0, first);

    // stateMove -> move
    Move move;
    move.player = PLAYER1;
    move.src_x = (stateMove % 10000)/1000;
    move.src_y = (stateMove % 1000)/100;
    move.dst_x = (stateMove % 100)/10;
    move.dst_y =  stateMove % 10; 

    /* // check 
    cout << move.player << endl;
    cout << move.src_x << endl;
    cout << move.src_y << endl;
    cout << move.dst_x << endl;
    cout << move.dst_y << endl;

    
	for (int row = 0; row < XYDIM; row++)
		for (int col = 0; col < XYDIM; col++)
        {
            cout << state.getloc(row,col);
        } cout << endl;

    //exit(1);
    */

	short x, y;
	board game_board;
	bool allclear;

	// Get current state of the game.
	game_board = state.get_game_state();

	// First, verify that a player isn't trying to move another's stone.
	if (move.player != game_board.layout[move.src_y][move.src_x])
		return false;

	// Second, verify that a player actually tries to move somewhere...
	if (move.dst_y == move.src_y && move.dst_x == move.src_x)  // Wow - really?
		return false;

	// Check for invalid 'North' move.
	if (move.dst_y < move.src_y && move.dst_x == move.src_x) {
		
		y = move.src_y - 1;
		allclear = true;

		while (allclear && y >= 0)
			if (game_board.layout[y][move.dst_x] != EMPTY)
				allclear = false;
			else
				y--;

		y++;	// Went past the valid move cell, so back it up.

		if (move.dst_y != y)
			return false;
	}

	// Check for invalid 'South' move.
	if (move.dst_y > move.src_y && move.dst_x == move.src_x) {
		
		y = move.src_y + 1;
		allclear = true;

		while (allclear && y < XYDIM)
			if (game_board.layout[y][move.dst_x] != EMPTY)
				allclear = false;
			else
				y++;

		y--;	// Went past the valid move cell, so back it up.

		if (move.dst_y != y)
			return false;
	}

	// Check for invalid 'East' move.
	if (move.dst_y == move.src_y && move.dst_x > move.src_x) {
		
		x = move.src_x + 1;
		allclear = true;

		while (allclear && x < XYDIM)
			if (game_board.layout[move.dst_y][x] != EMPTY)
				allclear = false;
			else
				x++;

		x--;	// Went past the valid move cell, so back it up.

		if (move.dst_x != x)
			return false;
	}

	// Check for invalid 'West' move.
	if (move.dst_y == move.src_y && move.dst_x < move.src_x) {
		
		x = move.src_x - 1;
		allclear = true;

		while (allclear && x >= 0)
			if (game_board.layout[move.dst_y][x] != EMPTY)
				allclear = false;
			else
				x--;

		x++;	// Went past the valid move cell, so back it up.

		if (move.dst_x != x)
			return false;
	}

	// Check for invalid 'Northeast' move.
	if (move.dst_y < move.src_y && move.dst_x > move.src_x) {
		
		x = move.src_x + 1;
		y = move.src_y - 1;
		allclear = true;

		while (allclear && y >= 0 && x < XYDIM)
			if (game_board.layout[y][x] != EMPTY)
				allclear = false;
			else {
				x++;
				y--;
			}

		x--;	// Went past the valid move cell, so back it up.
		y++;	

		if (move.dst_x != x || move.dst_y != y)
			return false;
	}

	// Check for invalid 'Northwest' move.
	if (move.dst_y < move.src_y && move.dst_x < move.src_x) {
		
		x = move.src_x - 1;
		y = move.src_y - 1;
		allclear = true;

		while (allclear && y >= 0 && x >= 0)	// Fix due to Kirt Guthrie.
			if (game_board.layout[y][x] != EMPTY)
				allclear = false;
			else {
				x--;
				y--;
			}

		x++;	// Went past the valid move cell, so back it up.
		y++;	

		if (move.dst_x != x || move.dst_y != y)
			return false;
	}

	// Check for invalid 'Southeast' move.
	if (move.dst_y > move.src_y && move.dst_x > move.src_x) {
		
		x = move.src_x + 1;
		y = move.src_y + 1;
		allclear = true;

		while (allclear && y < XYDIM && x < XYDIM)
			if (game_board.layout[y][x] != EMPTY)
				allclear = false;
			else {
				x++;
				y++;
			}

		x--;	// Went past the valid move cell, so back it up.
		y--;	

		if (move.dst_x != x || move.dst_y != y)
			return false;
	}

	// Check for invalid 'Southwest' move.
	if (move.dst_y > move.src_y && move.dst_x < move.src_x) {
		
		x = move.src_x - 1;
		y = move.src_y + 1;
		allclear = true;

		while (allclear && y < XYDIM && x >= 0)
			if (game_board.layout[y][x] != EMPTY)
				allclear = false;
			else {
				x--;
				y++;
			}

		x++;	// Went past the valid move cell, so back it up.
		y--;	

		if (move.dst_x != x || move.dst_y != y)
			return false;
	}


	return true;   // Made it past all the checks - Valid move!
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
