// player1.h: player1 agent.
// Author:    Jordan Winkler
// Date:	  Sat Apr  7 02:18:10 EDT 2018
// MS Visual C++
#ifndef PLAYER1_H
#define PLAYER1_H

#include "constants.h"
#include "state.h"
#include "player.h"
#include <list>
#include <map>
using namespace std;


/* 
   Dao bot
   -----------------------------------------------------------------
   So far a regular graph traversal with a statical heuristic
   

   Graphy:
   examines the graph n steps ahead, plays defensively

   Stats:
   Has no clue how to play Dao. So instead moves based on past win 
   data.

   Random bot:
   So the first thing on the list was to make a random agent. It 
   seems like the "Hello, World!" of ai bots. :)
   Random agent will serve as a baseline/backup.

   todo:: 
      perma graph for moves, 
      hash table for data,
      timers for various functions
*/
class Player1 : public Player
{
private:
    class data 
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
        bool same_state(char* b);
        bool same_move(char* b);
        bool same_state(const data& b);
        bool same_move(const data& b);
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

    // main process of deciding a move
    // consulting different parts of the AI brain
    Move bot_move(unsigned short p, board game_board);
    Move graph_bot_move(unsigned short p, board game_board);
    Move stat_bot_move(unsigned short p, board game_board);
    Move rand_bot_move(unsigned short p, board game_board);

    bool validmove(Move move, board game_board);
    bool isover(board game_board, int& winner);
    Move rand_move(int p);
    list<Move> move_space(board game_board, int p);
    list<Move> safe_space(board game_board, int p,int depth);
    board makeMove(board game_board, Move move);
    bool defensible(board game_board, int p);
    bool suicide(board game_board, int p);

public:
	// default left for compatibility
    Move get_move(unsigned short p, board game_board);
};

/****************************************************************
| Name: get_move
|    
| Precodition: It is the players turn, player has decided to be a 
|              human or a bot.
| Postcondition: move has been decided and passed back
|
| Parameters:
|       
|   IN: player number as an unsigned short, game board as type board
|   Out: nothing
|   
| Returns: a move from the player or bot
\****************************************************************/
Move Player1::get_move(unsigned short p, board game_board)
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

/****************************************************************
| Name: bot_move
|    
| Precodition: get_move was just called
| Postcondition: a move has been decided by the bot
|
| Parameters:
|       
|   IN: player number as an unsigned int, and the game board as 
|       a type board
|   Out: nothing
|   
| Returns: the move decided by the bot of type Move
\****************************************************************/
Move Player1::bot_move(unsigned short p, board game_board)
{
    
    
    return graph_bot_move(p,game_board);
}

/****************************************************************
| Name: graph_bot_move
|    
| Precodition: get_move was just called
| Postcondition: a move has been decided by the graph bot
|
| Parameters:
|       
|   IN: player number as an unsigned int, and the game board as 
|       a type board
|   Out: nothing
|   
| Returns: the move decided by the graph bot of type Move
\****************************************************************/
Move Player1::graph_bot_move(unsigned short p, board game_board)
{
    int searchdepth = 0;

    list<Move> moves = safe_space(game_board,p,searchdepth);

    if (moves.size() == 0) // panic!
        return rand_move(p);
    
    // not super picky
    int random = rand() % moves.size();
    list<Move>::iterator iter = moves.begin();
    for (int i = 0 ; i < random ; i++, iter++); 
    return *iter; 
}

/****************************************************************
| Name: stat_bot_move
|    
| Precodition: get_move was just called
| Postcondition: a move has been decided by the stat bot
|
| Parameters:
|       
|   IN: player number as an unsigned int, and the game board as 
|       a type board
|   Out: nothing
|   
| Returns: the move decided by the stat bot of type Move
\****************************************************************/
Move Player1::stat_bot_move(unsigned short p, board game_board)
{
    // ok, planning a move..
    Move move;
    move.player = p; // first step: I am player1

    // I should write down what the board looks like, also..
    // that I am player1
    data stateMovetemp;
    stateMovetemp.state(game_board);
    stateMovetemp.player(p);

    // Does this state look familiar? 

    // Is there win data, can I look at it?
    char input[] = "win_moves_player1";
    ifstream fin(input);
    if (!fin.good())
    {
        cout << "(state,move) file error\n";
        exit(1);
    }

/**/// where the stats happens 
    // todo: tuples 
    // ((state-move(current), mean/var)_1 , ..., (state-move(current), mean/var)_n)
    // 
    // Cool. Just a line at a time. Any matching states?
    char buffer[21] = {0};
    data fileLine;
    while (!fin.eof() && fin.good()) 
    {
        fin >> buffer;
        fileLine.dat(buffer); 
        if (fileLine.same_state(stateMovetemp) && fileLine.safe(fileLine)) //found move, clean up later
        {
            stateMove.dat(fileLine.str()); // adding to memory
            cout << "player1 using data! : " << fileLine.str() << endl;
            //cout << stateMove.str() << endl; // is it this?

            fin.close();
            return stateMove.move(); // doing it, bugged
        }
    }
/**/


    // Well, I did not find a move.
    // have I moved before?
    if (stateMove.isclean()) // well better try something
    {
        move.src_x = rand() % XYDIM;
        move.src_y = rand() % XYDIM;
        move.dst_x = rand() % XYDIM;
        move.dst_y = rand() % XYDIM;

        stateMove.dat(stateMovetemp.str());
        stateMove.move(move);

        return stateMove.move(move);
    }
    else if (!stateMove.same_state(stateMovetemp)) // was I successful
    {
        // Cool, I successfully moved! Better write that down.
        char output[] = "player1.log";
        ofstream fout;
        fout.open(output, std::ios::app); //for appending to file
        if (!fout.good())
        {
            cout << "(state,move) player1.log file error\n";
            exit(1);
        }
        fout << stateMove.str() << endl; // bugged

        // but this situtation is still new
        move.src_x = rand() % XYDIM;
        move.src_y = rand() % XYDIM;
        move.dst_x = rand() % XYDIM;
        move.dst_y = rand() % XYDIM;

        fout.close();

        stateMove.dat(stateMovetemp.str());
        stateMove.move(move);

        return stateMove.move(move);
    } 
    else
    {
        // but this situtation is still new
        move.src_x = rand() % XYDIM;
        move.src_y = rand() % XYDIM;
        move.dst_x = rand() % XYDIM;
        move.dst_y = rand() % XYDIM;

        stateMove.dat(stateMovetemp.str());
        stateMove.move(move);
        //cout << "new move\n";
        //cout << stateMove.str() << endl;

        return stateMove.move(move);
    }
}

/****************************************************************
| Name: rand_bot_move
|    
| Precodition: get_move was just called
| Postcondition: a move has been decided by the random bot
|
| Parameters:
|       
|   IN: player number as an unsigned int, and the game board as 
|       a type board
|   Out: nothing
|   
| Returns: the move decided by the random bot of type Move
\****************************************************************/
Move Player1::rand_bot_move(unsigned short p, board game_board)
{
    return rand_move(p);
}


/****************************************************************
| Name: data
|    
| Precodition: player has been created
| Postcondition: data has been created
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
Player1::data::data() 
{
    stateSize = XYDIM*XYDIM;
    moveSize = 5; // struct move size
    datSize = stateSize + moveSize; 

    stateMove = new char[datSize+1]; // for safety
    for (int i = 0 ; i < datSize+1 ; i++)
        stateMove[i] = 0;
}

/****************************************************************
| Name: data
|    
| Precodition: a string of data (probably from a file) 
|              needs to be turned into data type called data
| Postcondition: data has been created
|
| Parameters:
|       
|   IN: character string 
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
Player1::data::data(char* input)
{
    stateSize = XYDIM*XYDIM;
    moveSize = 5; // struct move size
    datSize = stateSize + moveSize; 

    stateMove = new char[datSize+1]; 
    stateMove[datSize] = 0; // for safety
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = input[i];
}

/****************************************************************
| Name: clean
|    
| Precodition: data needs to be cleaned
| Postcondition: player data has all 0 values
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void Player1::data::clean() 
{ 
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = 0;
}

/****************************************************************
| Name: isclean
|    
| Precodition: player object was initialized
| Postcondition: confirmed if block of data is all 0's
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: boolean if data is clean (all 0's)
\****************************************************************/
bool Player1::data::isclean() 
{ 
    bool clean = 1;
    for (int i = 0 ; i < datSize ; i++)
        if (stateMove[i] != 0)
            clean = 0;
    return clean;
}

/****************************************************************
| Name: same_state
|    
| Precodition: none
| Postcondition: if both data and the character array have 
|                matching elements, then return true
|
| Parameters:
|       
|   IN: location of character array to check against data
|   Out: nothing
|   
| Returns: boolean if state matches character array
\****************************************************************/
bool Player1::data::same_state(char* b) 
{
    bool isSame = 1;
    for (int i = 0 ; i < stateSize ; i++)
        if (stateMove[i] != b[i]) 
            isSame = 0;
    return isSame;
}

/****************************************************************
| Name: same_move
|    
| Precodition: none
| Postcondition: return true if move matches character array 
|                representation of state/move
|
| Parameters:
|       
|   IN: location of a character array that represents a move
|   Out: nothing
|   
| Returns: boolean if two moves are the same
\****************************************************************/
bool Player1::data::same_move(char *b)
{
    bool isSame = 1;
    for (int i = (datSize-moveSize) ; i < datSize ; i++)
        if (stateMove[i] != b[i]) 
            isSame = 0;
    return isSame;
}

/****************************************************************
| Name: same_state
|    
| Precodition: none
| Postcondition: if both original data and data in arg have 
|                matching elements, then return true
|
| Parameters:
|       
|   IN: constant reference to data
|   Out: constant reference to data
|   
| Returns: boolean if state matches other state
\****************************************************************/
bool Player1::data::same_state(const data& b)
{
    bool isSame = 1;
    for (int i = 0 ; i < stateSize ; i++)
        if (stateMove[i] != b.stateMove[i]) 
            isSame = 0; 
    return isSame;
}

/****************************************************************
| Name: same_move
|    
| Precodition: none
| Postcondition: return true if move matches another move
|
| Parameters:
|       
|   IN: constant reference to data type called data
|   Out: constant reference to data type called data
|   
| Returns: boolean if two moves are the same
\****************************************************************/
bool Player1::data::same_move(const data& b)
{
    bool isSame = 1;
    for (int i = (datSize-moveSize) ; i < datSize ; i++)
        if (stateMove[i] != b.stateMove[i]) 
            isSame = 0;
    return isSame;
}

/****************************************************************
| Name: dat
|    
| Precodition: nothing
| Postcondition: character array was encoded into data
|
| Parameters:
|       
|   IN: character array that should represent a data type
|   Out: nothing
|   
| Returns: character array of what was encoded from the incoming 
|          string
\****************************************************************/
char* Player1::data::dat(char* string) 
{
    stateMove = new char[datSize];
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = string[i];

    return stateMove;
}

/****************************************************************
| Name: data (copy constructor)
|    
| Precodition: data data1 = data2;
| Postcondition: data1 is a copy of data2 at a different location
|
| Parameters:
|       
|   IN: constant reference to data type called data
|   Out: same constant reference to data type called data
|   
| Returns: nothing
\****************************************************************/
Player1::data::data(const data &obj) // copy constructor
{
    stateMove = new char[datSize+1]; // +1 for safety
    stateMove[datSize] = 0;
    for (int i = 0 ; i < datSize ; i++)
        stateMove[i] = obj.stateMove[i];
}

/****************************************************************
| Name: move
|    
| Precodition: nothing
| Postcondition: a move has been returned
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: a move of type Move
\****************************************************************/
Move Player1::data::move()
{
    Move m;
    m.player = PLAYER1; // gets fixed by auto replace
    m.src_x = stateMove[stateSize+1] - '0';
    m.src_y = stateMove[stateSize+2] - '0';
    m.dst_x = stateMove[stateSize+3] - '0';
    m.dst_y = stateMove[stateSize+4] - '0';

    return m;
}

/****************************************************************
| Name: state
|    
| Precodition: nothing
| Postcondition: the game state has been returned
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: the game board of type board
\****************************************************************/
board Player1::data::state()
{
    board bord;
    for (int i = 0 ; i < XYDIM ; i++)
        for (int j = 0 ; j < XYDIM ; j++)
        {
            bord.layout[i][j] = stateMove[i*XYDIM+j] - '0';
        }
    return bord;
}

/****************************************************************
| Name: move
|    
| Precodition: nothing
| Postcondition: move has been stored into data and returned
|
| Parameters:
|       
|   IN: a move of type Move
|   Out: nothing
|   
| Returns: a move of type Move
\****************************************************************/
Move Player1::data::move(Move mov)
{
    stateMove[stateSize+0] = mov.player + '0';
    stateMove[stateSize+1] = mov.src_x + '0';
    stateMove[stateSize+2] = mov.src_y + '0';
    stateMove[stateSize+3] = mov.dst_x + '0';
    stateMove[stateSize+4] = mov.dst_y + '0';

    return mov;
}

/****************************************************************
| Name: state
|    
| Precodition: nothing
| Postcondition: stores and returns the inputed game board
|
| Parameters:
|       
|   IN: the game board of type board
|   Out: nothing
|   
| Returns: the game board of type board
\****************************************************************/
board Player1::data::state(board bord)
{
    for (int i = 0 ; i < XYDIM ; i++)
        for (int j = 0 ; j < XYDIM ; j++)
        {
            stateMove[i*XYDIM+j] = bord.layout[i][j] + '0';
        }

    return bord;
}

/****************************************************************
| Name: player
|    
| Precodition: nothing
| Postcondition: the current player is stored in data
|
| Parameters:
|       
|   IN: player number of type unsigned int
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void Player1::data::player(unsigned short p)
{
    stateMove[stateSize+0] = p + '0';
}

/****************************************************************
| Name: safe
|    
| Precodition: nothing
| Postcondition: returns true if data is within range of reasonable
|                values
|
| Parameters:
|       
|   IN: const reference to data
|   Out: same data
|   
| Returns: true if state is safe, false if the data is unsafe
\****************************************************************/
bool Player1::data::safe(const data& b)
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

/****************************************************************
| Name: safe
|    
| Precodition: nothing
| Postcondition: returns true if data representation is safe else 0
|
| Parameters:
|       
|   IN: location of character array 
|   Out: nothing
|   
| Returns: true if data is safe false if data is not safe
\****************************************************************/
bool Player1::data::safe(char* b)
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


/****************************************************************
| Name: validmove
|    
| Precodition: nothing
| Postcondition: returns truth value of whether a move is valid
|
| Parameters:
|       
|   IN: a move and a game board
|   Out: nothing
|   
| Returns: true if a move is valid, false otherwise
\****************************************************************/
bool Player1::validmove(Move move, board game_board)
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


/****************************************************************
| Name: isover
|    
| Precodition: nothing
| Postcondition: true if game is over, else false
|
| Parameters:
|       
|   IN: a game board and int for the winner
|   Out: the int for the winner
|   
| Returns: true if game is over, false otherwise
\****************************************************************/
bool Player1::isover(board game_board, int &winner)
{
	unsigned short x, y;
	bool gameover = false;

#define gbl game_board.layout
/*
    for (int i = 0 ; i < XYDIM ; i++)
    {
        for (int j = 0 ; j < XYDIM ; j++)
            cout << ' ' << gbl[i][j];
        cout << endl;
    }
*/
/*

    cout << (game_board.layout[0][0] == game_board.layout[0][3] &&
		game_board.layout[0][0] == game_board.layout[3][0] &&
		game_board.layout[0][0] == game_board.layout[3][3] &&
		game_board.layout[0][0] != EMPTY) << ' ';

	cout <<(game_board.layout[0][0] != EMPTY && 
        game_board.layout[0][1] != EMPTY &&
		game_board.layout[1][0] != EMPTY && 
        game_board.layout[1][1] != EMPTY &&
		game_board.layout[0][0] != game_board.layout[0][1] &&
		game_board.layout[0][0] != game_board.layout[1][0] &&
		game_board.layout[0][0] != game_board.layout[1][1]);

	cout << (game_board.layout[0][3] != EMPTY && 
        game_board.layout[0][2] != EMPTY &&
		game_board.layout[1][3] != EMPTY && 
        game_board.layout[1][2] != EMPTY &&
		game_board.layout[0][3] != game_board.layout[0][2] &&
		game_board.layout[0][3] != game_board.layout[1][3] &&
		game_board.layout[0][3] != game_board.layout[1][2]);

	cout << (game_board.layout[3][0] != EMPTY && 
        game_board.layout[3][1] != EMPTY &&
		game_board.layout[2][0] != EMPTY && 
        game_board.layout[2][1] != EMPTY &&
		game_board.layout[3][0] != game_board.layout[3][1] &&
		game_board.layout[3][0] != game_board.layout[2][0] &&
		game_board.layout[3][0] != game_board.layout[2][1]);

	cout << (game_board.layout[3][3] != EMPTY && 
        game_board.layout[3][2] != EMPTY &&
		game_board.layout[2][3] != EMPTY && 
        game_board.layout[2][2] != EMPTY &&
		game_board.layout[3][3] != game_board.layout[3][2] &&
		game_board.layout[3][3] != game_board.layout[2][3] &&
		game_board.layout[3][3] != game_board.layout[2][2]);


	for (x = 0; x < XYDIM; x++)
		cout << (game_board.layout[0][x] != EMPTY && 
            game_board.layout[1][x] == game_board.layout[0][x] && 
            game_board.layout[2][x] == game_board.layout[0][x] && 
            game_board.layout[3][x] == game_board.layout[0][x]);
*/

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


	if (game_board.layout[0][0] != EMPTY && 
        game_board.layout[0][1] != EMPTY &&
		game_board.layout[1][0] != EMPTY && 
        game_board.layout[1][1] != EMPTY &&
		game_board.layout[0][0] != game_board.layout[0][1] &&
		game_board.layout[0][0] != game_board.layout[1][0] &&
		game_board.layout[0][0] != game_board.layout[1][1]) {

		gameover = true;
		winner = game_board.layout[0][0];

		return gameover;
	}

	if (game_board.layout[0][3] != EMPTY && 
        game_board.layout[0][2] != EMPTY &&
		game_board.layout[1][3] != EMPTY && 
        game_board.layout[1][2] != EMPTY &&
		game_board.layout[0][3] != game_board.layout[0][2] &&
		game_board.layout[0][3] != game_board.layout[1][3] &&
		game_board.layout[0][3] != game_board.layout[1][2]) {

		gameover = true;
		winner = game_board.layout[0][3];

		return gameover;
	}
	if (game_board.layout[3][0] != EMPTY && 
        game_board.layout[3][1] != EMPTY &&
		game_board.layout[2][0] != EMPTY && 
        game_board.layout[2][1] != EMPTY &&
		game_board.layout[3][0] != game_board.layout[3][1] &&
		game_board.layout[3][0] != game_board.layout[2][0] &&
		game_board.layout[3][0] != game_board.layout[2][1]) {

		gameover = true;
		winner = game_board.layout[3][0];

		return gameover;
	}
	if (game_board.layout[3][3] != EMPTY && 
        game_board.layout[3][2] != EMPTY &&
		game_board.layout[2][3] != EMPTY && 
        game_board.layout[2][2] != EMPTY &&
		game_board.layout[3][3] != game_board.layout[3][2] &&
		game_board.layout[3][3] != game_board.layout[2][3] &&
		game_board.layout[3][3] != game_board.layout[2][2]) {

		gameover = true;
		winner = game_board.layout[3][3];

		return gameover;
	}


	// Check for 'column' victory.
	for (x = 0; x < XYDIM; x++)
		if (game_board.layout[0][x] != EMPTY && 
            game_board.layout[1][x] == game_board.layout[0][x] && 
            game_board.layout[2][x] == game_board.layout[0][x] && 
            game_board.layout[3][x] == game_board.layout[0][x]) {

			gameover = true;
			winner = game_board.layout[0][x];

			return gameover;
		}


/*
	for (y = 0; y < XYDIM; y++)
	cout << (game_board.layout[y][0] != EMPTY && 
            game_board.layout[y][1] == game_board.layout[y][0] && 
            game_board.layout[y][2] == game_board.layout[y][0] && 
            game_board.layout[y][3] == game_board.layout[y][0]);
    cout << ' ';

	for (y = 0; y < XYDIM - 1; y++)
	 for (x = 0; x < XYDIM - 1; x++)
         cout << (game_board.layout[y][x] != EMPTY && 
             game_board.layout[y][x] == game_board.layout[y+1][x] && 
             game_board.layout[y][x] == game_board.layout[y][x+1] && 
             game_board.layout[y][x] == game_board.layout[y+1][x+1]);
    cout << ' ';
*/

	// Check for 'row' victory.
	for (y = 0; y < XYDIM; y++)
		if (game_board.layout[y][0] != EMPTY && 
            game_board.layout[y][1] == game_board.layout[y][0] && 
            game_board.layout[y][2] == game_board.layout[y][0] && 
            game_board.layout[y][3] == game_board.layout[y][0]) {

			gameover = true;
			winner = game_board.layout[y][0];

			return gameover;
		}



	// Check for 'square cluster' victory.
	for (y = 0; y < XYDIM - 1; y++)
	 for (x = 0; x < XYDIM - 1; x++)
         if (game_board.layout[y][x] != EMPTY && 
             game_board.layout[y][x] == game_board.layout[y+1][x] && 
             game_board.layout[y][x] == game_board.layout[y][x+1] && 
             game_board.layout[y][x] == game_board.layout[y+1][x+1]) {

				gameover = true;
				winner = game_board.layout[y][x];

				return gameover;
			}


#undef gbl 

	return gameover;
}

/****************************************************************
| Name: rand_move
|    
| Precodition: nothing
| Postcondition: returns a random move
|
| Parameters:
|       
|   IN: player number as an int
|   Out: nothing
|   
| Returns: a random move for the player that was entered
\****************************************************************/
Move Player1::rand_move(int p)
{
    Move move;
    move.player = p;
    move.src_x = rand() % XYDIM;
    move.src_y = rand() % XYDIM;
    move.dst_x = rand() % XYDIM;
    move.dst_y = rand() % XYDIM;

    return move;
}

/****************************************************************
| Name: safe_space (part of graph bot)
|    
| Precodition: nothing
| Postcondition: returns a list of moves that are not suicidal
|                and protect against oponent mate in n moves
|                if possible, else it returns a list of moves
|                one layer less than the mate in n
|
| Parameters:
|       
|   IN: the current board, the player, the desire depth of
|       prediction to stay safe form mate in n-moves
|   Out: nothing
|   
| Returns: a list of moves that are safe from mate in n moves, if
|          possible
\****************************************************************/
list<Move> Player1::safe_space(board game_board, int p, int depth)
{
    // get set of valid moves
    list<Move> moves = move_space(game_board,p);
    cout << "player1 valid moves: " << moves.size() << endl; 

    // remove move if suicide
    for (list<Move>::iterator iter = moves.begin();
         iter != moves.end();
         iter++)
    {
        board testBoard = makeMove(game_board, *iter);
        if (suicide(testBoard, p)) 
            iter = moves.erase(iter);
    }

    cout << "player1 non-suicide moves: " << moves.size() << endl; 

    // remove move if it opens up for mate
    list<Move> moved = moves; // possibility opponent does not take win
   
    list<Move>::iterator iter = moves.begin(); 
    // best do while, possible to have begin() == end()
    do 
    {
        board testBoard = makeMove(game_board, *iter);
        if (!defensible(testBoard, p)) 
        {
            //cout << !defensible(testBoard, p) << endl;
            iter = moves.erase(iter); // moves to next node after
        } else 
            iter++;
    }
    while (iter != moves.end()); // checked everything

    cout << "player1 defensible moves: " << moves.size() << endl; 
    
    if (moves.size() == 0) //well.. better have layer 1 than nothing
        moves = moved;


    return moves;
}

/****************************************************************
| Name: move_space
|    
| Precodition: nothing
| Postcondition: the player knows what moves are actually valid,
|                given the current game state
|
| Parameters:
|       
|   IN: game board, the player
|   Out: nothing
|   
| Returns: list of valid moves
\****************************************************************/
list<Move> Player1::move_space(board game_board, int p) 
{
    list<Move> moves;
    Move testMove;
    int winner = 0;

    // get valid move
    for (int i = 0 ; i < XYDIM ; i++)
     for (int j = 0 ; j < XYDIM ; j++)
      for (int k = 0 ; k < XYDIM ; k++)
       for (int l = 0 ; l < XYDIM ; l++)
       {
         testMove.player = p;
         testMove.src_x = i;
         testMove.src_y = j;
         testMove.dst_x = k;
         testMove.dst_y = l;
                    
         board testBoard = makeMove(game_board, testMove);
         if (validmove(testMove, game_board)) //play valid move
            moves.push_front(testMove); 
       }
    return moves;
}

/****************************************************************
| Name: suicide
|    
| Precodition: nothing
| Postcondition: returns true if move for player p is suicide
|
| Parameters:
|       
|   IN: game board, player number
|   Out: nothing
|   
| Returns: returns true if move for player p is suicide
\****************************************************************/
bool Player1::suicide(board game_board, int p) // pruner
{
    int winner;
    if (isover(game_board,winner) && winner != p )
        return 1;
    else
        return 0;
}

/****************************************************************
| Name: defensible
|    
| Precodition: moves where checked for validness
| Postcondition: returns true of none of the next set of moves 
|                causes a loss for player p
|
| Parameters:
|       
|   IN: game board, and the player number
|   Out: nothing
|   
| Returns: returns true of none of the next set of moves causes 
|          player p to lose
\****************************************************************/
bool Player1::defensible(board game_board, int p) // pruner
{
    Move testMove;
    int winner;
    board testBoard;
    p = (p==1)?2:1; // opposing player

    //p = 2; //debug
    // try everything
    for (int i = 0 ; i < XYDIM ; i++)
     for (int j = 0 ; j < XYDIM ; j++)
      for (int k = 0 ; k < XYDIM ; k++)
       for (int l = 0 ; l < XYDIM ; l++)
       {
         testMove.player = p;
         testMove.src_x = i;
         testMove.src_y = j;
         testMove.dst_x = k;
         testMove.dst_y = l;
                    
         testBoard = makeMove(game_board, testMove);
         if (validmove(testMove, game_board)) // just in case
             if (isover(testBoard,winner)) 
                 if (winner == p) // let them suicide
                     return 0; // found move player could use to win/lose
       }
    return 1; // all moves are safe
}

/****************************************************************
| Name: makeMove
|    
| Precodition: needs a valid game board and move
| Postcondition: returns a board that was changed by a move
|
| Parameters:
|       
|   IN: game board and player number
|   Out: none
|   
| Returns: returns a board that was changed by a move
\****************************************************************/
board Player1::makeMove(board game_board, Move move)
{
    game_board.layout[move.src_y][move.src_x] = 0;
    game_board.layout[move.dst_y][move.dst_x] = move.player;

    return game_board;
}




#endif
