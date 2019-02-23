// player2.h: player 1 agent.
// Author:    <your name>
// Date:	  <date>
// MS Visual C++
#ifndef PLAYER2_H
#define PLAYER2_H

#include "constants.h"
#include "state.h"
#include "player.h"
#include "player2.h"
#include <list>
#include <map>
using namespace std;

bool validmove(Move move, board game_board);
bool isover(board game_board, int &winner);
Move randMove(int p);

/* 
   graphy
   just makes graph n moves ahead

*/
class Player2 : public Player
{
private:
    class data // what is a statistician without data?
    {
        // data: state of game, player move
        private:
        int datSize;
        int stateSize;
        int moveSize;
        public:
        char* stateMove;

        // constructors
        data();                 // default
        data(char* string);     // from a string
        data(const data &obj);  // copy constructor

        char& operator[](int i) {return stateMove[i];}
        void clean();
        bool isclean();
        bool sameState(char* b);
        bool sameMove(char* b);
        bool sameState(const data& b);
        bool sameMove(const data& b);
        bool safe(const data& b);
        bool safe(char* b);

        // converters
        Move move(Move mov);            // statemove <- move
        board state(board bord);        // stateMove <- state
        void player(unsigned short p);  // stateMove <- player
        char* str() {return stateMove;} // str <- stateMove
        char* dat(char* string);        // stateMove <- str
        Move move();                    // move <- stateMove
        board state();                  // state <- stateMove
        
        // getters
        int getDatSize() { return datSize; }
        int getStateSize() { return stateSize; }
        int getMoveSize() { return moveSize; }

        ~data() { delete[] stateMove; } 
    };
        
    data stateMove; // should be persistent
    
    int datSize() { return stateMove.getDatSize(); }
    int stateSize() { return stateMove.getStateSize(); }
    int moveSize() { return stateMove.getMoveSize(); }
public:
	// default left for compatibility
    Move get_move(unsigned short p, board game_board);

    // main process of deciding a move
    Move bot_move(unsigned short p, board game_board);
};

Move Player2::get_move(unsigned short p, board game_board)
{
    Move move;
     
    move.player = p;
    
    if (gettype()) 
    {
        cout << "Enter move (old_x old_y new_x new_y): ";
    	cin >> move.src_x;
    	cin >> move.src_y;
    	cin >> move.dst_x;
    	cin >> move.dst_y;
    }
    else 
    {
        return bot_move(p,game_board);
    }
}

Move Player2::bot_move(unsigned short p, board game_board)
{
    int movesAhead = 0;

    list<board> states;
    board testState;
    list<Move> moves;
    Move testMove;
    data a;
    int winner = 0;

    // get valid move
    for (int i = 0 ; i < XYDIM ; i++)
     for (int j = 0 ; j < XYDIM ; j++)
      for (int k = 0 ; k < XYDIM ; k++)
       for (int l = 0 ; l < XYDIM ; l++)
       {
         testMove.player = p;
         testMove.src_x = i;
         testMove.scr_y = j;
         testMove.dst_x = k;
         testMove.dst_y = l;
                    
         // note: if (exp1 && exp2), exp1 evaluates first 
         if (validmove(testMove, game_board)) 
          if (!(isover(game_board, winner) && winner != PLAYER2))
           moves.push_front(testMove); 
       }

    if (moves.empty()) 
        return randMove(p);
        
    if (movesAhead == 0) // not picky
        return moves.back();
    
        
   // list<board>::iterator i = moves.begin();
//bool validmove(Move move, board game_board);
//bool isover(board game_board, int &winner);


}




Player2::data::data() 
{
    stateSize = XYDIM*XYDIM;
    moveSize = 5; // struct move size
    datSize = stateSize + moveSize; 

    stateMove = new char[datSize+1]; // for safety
    for (int i = 0 ; i < datSize+1 ; i++)
        stateMove[i] = 0;
}
Player2::data::data(char* input)
{
    stateSize = XYDIM*XYDIM;
    moveSize = 5; // struct move size
    datSize = stateSize + moveSize; 

    stateMove = new char[datSize+1]; 
    stateMove[datSize] = 0; // for safety
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = input[i];
}
void Player2::data::clean() 
{ 
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = 0;
}
bool Player2::data::isclean() 
{ 
    bool clean = 1;
    for (int i = 0 ; i < datSize ; i++)
        if (stateMove[i] != 0)
            clean = 0;
    return clean;
}
bool Player2::data::sameState(char* b) 
{
    bool isSame = 1;
    for (int i = 0 ; i < stateSize ; i++)
        if (stateMove[i] != b[i]) 
            isSame = 0;
    return isSame;
}
bool Player2::data::sameMove(char *b)
{
    bool isSame = 1;
    for (int i = (datSize-moveSize) ; i < datSize ; i++)
        if (stateMove[i] != b[i]) 
            isSame = 0;
    return isSame;
}
bool Player2::data::sameState(const data& b)
{
    bool isSame = 1;
    for (int i = 0 ; i < stateSize ; i++)
        if (stateMove[i] != b.stateMove[i]) 
            isSame = 0; 
    return isSame;
}
bool Player2::data::sameMove(const data& b)
{
    bool isSame = 1;
    for (int i = (datSize-moveSize) ; i < datSize ; i++)
        if (stateMove[i] != b.stateMove[i]) 
            isSame = 0;
    return isSame;
}
char* Player2::data::dat(char* string) 
{
    stateMove = new char[datSize];
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = string[i];

    return stateMove;
}
Player2::data::data(const data &obj) // copy constructor
{
    stateMove = new char[datSize+1]; // safety
    stateMove[datSize] = 0;
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = obj.stateMove[i];
}

Move Player2::data::move()
{
    Move m;
    m.player = PLAYER2; // gets fixed by auto replace
    m.src_x = stateMove[stateSize+1] - '0';
    m.src_y = stateMove[stateSize+2] - '0';
    m.dst_x = stateMove[stateSize+3] - '0';
    m.dst_y = stateMove[stateSize+4] - '0';

    return m;
}
board Player2::data::state()
{
    board bord;
    for (int i = 0 ; i < XYDIM ; i++)
        for (int j = 0 ; j < XYDIM ; j++)
        {
            bord.layout[i][j] = stateMove[i*XYDIM+j] - '0';
        }
    return bord;
}

Move Player2::data::move(Move mov)
{
    stateMove[stateSize+0] = mov.player + '0';
    stateMove[stateSize+1] = mov.src_x + '0';
    stateMove[stateSize+2] = mov.src_y + '0';
    stateMove[stateSize+3] = mov.dst_x + '0';
    stateMove[stateSize+4] = mov.dst_y + '0';

    return mov;
}

board Player2::data::state(board bord)
{
    for (int i = 0 ; i < XYDIM ; i++)
        for (int j = 0 ; j < XYDIM ; j++)
        {
            stateMove[i*XYDIM+j] = bord.layout[i][j] + '0';
        }

    return bord;
}
void Player2::data::player(unsigned short p)
{
    stateMove[stateSize+0] = p + '0';
}

bool Player2::data::safe(const data& b)
{
    for (int i = 0 ; i < stateSize ; i++)
        if (b.stateMove[i] > XYDIM)
            return 0;
    if (b.stateMove[stateSize] > 2) // only ever two players
        return 0;
    for (int i = stateSize+1 ; i < datSize ; i++)
        if (b.stateMove[i] > XYDIM-1)
            return 0;

    return 1; // safe
}
bool Player2::data::safe(char* b)
{
    for (int i = 0 ; i < stateSize ; i++)
        if (b[i] > XYDIM)
            return 0;
    if (b[stateSize] > 2) // only ever two players
        return 0;
    for (int i = stateSize+1 ; i < datSize ; i++)
        if (b[i] > XYDIM-1)
            return 0;

    return 1; // safe
}

// validmove: 'helper' function for helping a player determine whether a move is valid.
// Inputs: a move and a game board.
// Output: true if move is valid, false otherwise.
bool validmove(Move move, board game_board)
{
	short x, y;
	bool allclear;

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

// isover: Checks whether the game is over.
// Inputs: a game board and a reference parameter for passing backa winner if any.
// Output: true if game is over, false otherwise.
bool isover(board game_board, int &winner)
{
	unsigned short x, y;
	bool gameover = false;

	// Check for a 'four corners' victory.
	if (game_board.layout[0][0] == game_board.layout[0][3] &&
		game_board.layout[0][0] == game_board.layout[3][0] &&
		game_board.layout[0][0] == game_board.layout[3][3] &&
		game_board.layout[0][0] != EMPTY) {

		gameover = true;
		winner = game_board.layout[0][0];

		return gameover;
	}

	// Check for a 'backdoor' victory.
	if (game_board.layout[0][0] != EMPTY && game_board.layout[0][1] != EMPTY &&
		game_board.layout[1][0] != EMPTY && game_board.layout[1][1] != EMPTY &&
		game_board.layout[0][0] != game_board.layout[0][1] &&
		game_board.layout[0][0] != game_board.layout[1][0] &&
		game_board.layout[0][0] != game_board.layout[1][1]) {

		gameover = true;
		winner = game_board.layout[0][0];

		return gameover;
	}
	if (game_board.layout[0][3] != EMPTY && game_board.layout[0][2] != EMPTY &&
		game_board.layout[1][3] != EMPTY && game_board.layout[1][2] != EMPTY &&
		game_board.layout[0][3] != game_board.layout[0][2] &&
		game_board.layout[0][3] != game_board.layout[1][3] &&
		game_board.layout[0][3] != game_board.layout[1][2]) {

		gameover = true;
		winner = game_board.layout[0][3];

		return gameover;
	}
	if (game_board.layout[3][0] != EMPTY && game_board.layout[3][1] != EMPTY &&
		game_board.layout[2][0] != EMPTY && game_board.layout[2][1] != EMPTY &&
		game_board.layout[3][0] != game_board.layout[3][1] &&
		game_board.layout[3][0] != game_board.layout[2][0] &&
		game_board.layout[3][0] != game_board.layout[2][1]) {

		gameover = true;
		winner = game_board.layout[3][0];

		return gameover;
	}
	if (game_board.layout[3][3] != EMPTY && game_board.layout[3][2] != EMPTY &&
		game_board.layout[2][3] != EMPTY && game_board.layout[2][2] != EMPTY &&
		game_board.layout[3][3] != game_board.layout[3][2] &&
		game_board.layout[3][3] != game_board.layout[2][3] &&
		game_board.layout[3][3] != game_board.layout[2][2]) {

		gameover = true;
		winner = game_board.layout[3][3];

		return gameover;
	}

	// Check for 'column' victory.
	for (x = 0; x < XYDIM; x++)
		if (game_board.layout[0][x] != EMPTY && game_board.layout[1][x] == game_board.layout[0][x]
			&& game_board.layout[2][x] == game_board.layout[0][x]
			&& game_board.layout[3][x] == game_board.layout[0][x]) {
			gameover = true;
			winner = game_board.layout[0][x];

			return gameover;
		}

	// Check for 'row' victory.
	for (y = 0; y < XYDIM; y++)
		if (game_board.layout[y][0] != EMPTY && game_board.layout[y][1] == game_board.layout[y][0]
			&& game_board.layout[y][2] == game_board.layout[y][0]
			&& game_board.layout[y][3] == game_board.layout[y][0]) {
			gameover = true;
			winner = game_board.layout[y][0];

			return gameover;
		}

	// Check for 'square cluster' victory.
	for (y = 0; y < XYDIM - 1; y++)
		for (x = 0; x < XYDIM - 1; x++)
			if (game_board.layout[y][x] != EMPTY && game_board.layout[y][x] == game_board.layout[y + 1][x]
				&& game_board.layout[y][x] == game_board.layout[y][x + 1]
				&& game_board.layout[y][x] == game_board.layout[y + 1][x + 1]) {
				gameover = true;
				winner = game_board.layout[y][x];

				return gameover;
			}

	return gameover;
}

Move randMove(int p)
{
    Move move;
    move.player = p;
    move.src_x = rand() % XYDIM;
    move.src_y = rand() % XYDIM;
    move.dst_x = rand() % XYDIM;
    move.dst_y = rand() % XYDIM;

    return move;
}


#endif
