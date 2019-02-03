// player2.h: player 1 agent.
// Author:    <your name>
// Date:	  <date>
// MS Visual C++
#ifndef PLAYER2_H
#define PLAYER2_H

#include "constants.h"
#include "state.h"
#include "player.h"
#include "player1.h"

/* 
   The Statistician

   Has no clue how to play Dao. So instead moves based on 
   past data.
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
    // ok, planning a move..
    Move move;
    move.player = p; // first step: I am player2

    // I should write down what the board looks like, also..
    // that I am player2
    data stateMovetemp;
    stateMovetemp.state(game_board);
    stateMovetemp.player(p);

    // Does this state look familiar? 

    // Is there win data, can I look at it?
    char input[] = "win_moves_player2";
    ifstream fin(input);
    if (!fin.good())
    {
        cout << "(state,move) file error\n";
        exit(1);
    }

/**/// where the stats happens
    // 
    // Cool. Just a line at a time. Any matching states?
    char buffer[21] = {0};
    data fileLine;
    while (!fin.eof() && fin.good()) 
    {
        fin >> buffer;
        fileLine.dat(buffer); 
        if (fileLine.sameState(stateMovetemp)) //found move
        {
            stateMove.dat(fileLine.str()); // adding to memory
            cout << "player2 using data! : ";
            cout << fileLine.str() << endl;
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
    else if (!stateMove.sameState(stateMovetemp)) // was I successful
    {
        // Cool, I successfully moved! Better write that down.
        char output[] = "player2.log";
        ofstream fout;
        fout.open(output, std::ios::app); //for appending to file
        if (!fout.good())
        {
            cout << "(state,move) player2.log file error\n";
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
bool Player2::data::isclean() // fix it
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

#endif
