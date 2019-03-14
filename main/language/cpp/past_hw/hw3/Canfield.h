/*********************************************************************
  Author:        Jordan Winkler, IUSB, CS
                 Dana Vrajitoru, IUSB, CS
  Class:         C243 Data Structures
  File name:     canfield.h
  Last updated:  September 2017
  Description:   Implementation of the card game of Canfield using 
                 stacks and queues.
*********************************************************************/

#ifndef CANFIELD_H
#define CANFIELD_H

#include "Queue.h"
#include "Stack.h"
#include <cstdlib> //for baackwards compatability

class Canfield 
{
private:

    Queue deck;
    Stack reserve;
    Stack *foundation,//[NUM_SUITS], 
          *tableau;//[NUM_SUITS];
    int   waste;
    bool  quit;
    char  from, 
          to;
    int   fromId, 
          toId;

    List  history;
    int   histIndex;

    // used to be global constants
    int NUM_CARDS, // = 52
        NUM_SUITS, // = 4
        NUM_RANKS; // = 13

public:
    // Default constructor
    Canfield();

    // Destructor
    ~Canfield();

    // The main loop of the game.
    void play();

private:

    // Empty all the data structures
    void emptyAll();

    // Starting a new game. It must reset all the data structures,
    // generate a new set of 52 random cards and place them in the
    // appropriate places in the game.
    void newGame();

    // creates a new pack of cards and shuffles them
    void newShuffledPack(int *newDeck);

    // Prints the choices of actions for the player.
    void printMenu();

    // Performs an action based on the user's choice.
    void performAction(char answer);

    // Displays the entire content of the game.
    void printGame();

    // Deals one card from the deck.
    void deal();

    // Performs one move.
    void move();

    // Determines what card is to be moved. Accessor method.
    int getCard();

    // Checks if the requested movement is possible. Accessor method.
    bool checkMove(int card);

    // Removes the card to be moved. Mutator method.
    void removeCard();

    // Adds the card or the entire tableau to its new destination. 
    // Mutator method.
    void addCard(int card);

    /***************************************************************
      cin.unget() is not implented in a standard way.
      so redo() and getCommand() are used to fill that role
    ***************************************************************/

    // Redoes the last move command. Called with 'r' in game.
    // can be used repeately, will repeat any move command added to 
    // the history list 
    void redo();
    
    // returns and stores buffer input. Also allows for easier 
    // automation and repetition of commands.
    char getCommand();

    // Reads a number between 0 and the limit. If the user enters
    // something outside the limit, they are asked to enter the number
    // again.
    void getNumber(int &n, int limit);

    
    // increases the challenge rating by keeping tableaus from 
    // being empty
    // tableau == {} and reserve != {} -> move reserve to tableau
    void autostep();

    // This checks if the game has been won. Implementation is in main
    // play loop.
    void checkWinCondition();
};

#endif
