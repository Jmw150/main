// player2.h: player 2 agent.
// Author:    Jordan Winkler
// Date:      Sat Mar 24 18:15:14 EDT 2018
// MS Visual C++

/*
  random bot
  
  So the first thing on the list was to make a random agent. It seems
  like the "Hello, World!" of ai bots. :)

  Random agent will serve as a baseline
*/

#ifndef PLAYER2_H
#define PLAYER2_H

class Player2 : public Player
{
public:
    // actuators
	Move get_move(unsigned short p, board game_board)
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
        	move.src_x = rand() % XYDIM;
        	move.src_y = rand() % XYDIM;
        	move.dst_x = rand() % XYDIM;
        	move.dst_y = rand() % XYDIM;
        }
    
    	return move;
    }
};

#endif
