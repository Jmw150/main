/*********************************************************************
  Author:        Jordan Winkler, IUSB, CS
                 Dana Vrajitoru, IUSB, CS
  Class:         C243 Data Structures
  File name:     canfield.cc
  Last updated:  September 2017
  Description:   Implementation of the card game of Canfield using 
                 stacks and queues.
*********************************************************************/

#include "Canfield.h"
#include "general.h"
#include <iostream>
#include <iomanip>
using namespace std;
#include <cstdlib>

// Default constructor
Canfield::Canfield()
    : deck(), reserve(), history() // calling default constructors
{
    waste  = -1;        // non existing card, empty marker
    quit   = false;
    from   = '\0'; 
    to     = '\0';
    fromId = 0; 
    toId   = 0;

    // moved all constants out of global space
    NUM_CARDS = 52;
    NUM_SUITS = 4; 
    NUM_RANKS = 13;

    foundation = new Stack[NUM_SUITS];
    tableau = new Stack[NUM_SUITS];

    histIndex = -1;  //-1 meaning not in history

} // Canfield() 

// Destructor
Canfield::~Canfield()
{
    emptyAll();
} // ~Canfield()

// Empty all the data structures
void Canfield::emptyAll()
{
    deck.makeEmpty();
    reserve.makeEmpty();
    
    for (int i = 0; i < NUM_SUITS; i++) 
    {
        foundation[i].makeEmpty();
        tableau[i].makeEmpty();
    }

    history.makeEmpty();
} // Canfield::emptyAll()

// The main loop of the game.
void Canfield::play()
{
    char answer;
    newGame();
    printGame();
    while (!quit) 
    {
        printMenu();
        answer = getCommand();
        performAction(answer);
        checkWinCondition();
    }
} // Canfield::play()

//////////////////////// New game ////////////////////////////////////

// Starting a new game. It must reset all the data structures,
// generate a new set of 52 random cards and place them in the
// appropriate places in the game.
void Canfield::newGame()
{
    int i, card;
    int cardsLeft = NUM_CARDS;
    int newDeck[NUM_CARDS];

    // Empty all the data structures
    emptyAll();

    // Create a new deck and shuffle it
    newShuffledPack(newDeck);

    // Now place the cards in the data structures
    // fill in the reserve with 13 cards
    for (i = 0; i < NUM_RANKS; i++)  
    {
        // use a card and decrease the total count
        card = newDeck[--cardsLeft]; 
        reserve.push(card);
    }

    // draw a card for each tableau
    for (i = 0; i < NUM_SUITS; i++)  
    {
        // use a card and decrease the total count
        card = newDeck[--cardsLeft]; 
        tableau[i].push(card);
    }

    // Initialize the foundations with 0
    for (i = 0; i < NUM_SUITS; i++)  
        foundation[i].push(0);

    // the card to play
    waste = newDeck[--cardsLeft];    

    // the remaining cards go into the deck
    while (cardsLeft > 0)            
    {
        card = newDeck[--cardsLeft];
        deck.enqueue(card);
    }

} // Canfield::newGame()

// Create a new pack of cards and shuffles them
void Canfield::newShuffledPack(int *newDeck)
{
    int i, j;
    for (i = 0; i < NUM_CARDS; i++)
        newDeck[i] = 1 + i % NUM_RANKS; // add the cards in order
    for (i = 0; i < NUM_CARDS-1; i++)   // then shuffle them
    {
        j = i + rand() % (NUM_CARDS-i); // random other card
        swap(newDeck[i], newDeck[j]);   // swap them
    }
} // Canfield::newShuffledPack()

///////////////////// Interface //////////////////////////////////////

// Prints the choices of actions for the player.
void Canfield::printMenu()
{
    cout << "[q] quit [N] new game [m] move [r] repeat a move "
         << "[d] deal a card" << endl;
    cout << "Enter your choice: ";
} // Canfield::printMenu()

// Performs an action based on the user's choice.
void Canfield::performAction(char answer)
{
    switch (answer) 
    {
    case 'q':
    case 'Q':
        quit = true;
        break;
    //case 'n': this causes problems because it's next to m
    case 'N':
        newGame();
        break;
    case 'm':
    case 'M':
        move();
        autostep(); 
        break;
    case 'd':
    case 'D':
        deal();
        break;
    case 'r':
        redo();
        break;
    }
    if (!quit)
        printGame();
} // Canfield::performAction()

// Displays the entire content of the game.
void Canfield::printGame()
{
    clearScreen();
    cout << "Deck:    ";
    if (waste != -1)
        cout << waste;
    cout << endl << endl
         << "Reserve: ";
    if (!reserve.isEmpty())
        cout << reserve.top();
    cout << endl << endl;
    for (int i = 0; i < NUM_SUITS; i++) 
    {
        cout << "F" << i << "      ";
        if (foundation[i].top() > 0)
            cout << setw(2) << foundation[i].top() << "   ";
        else
            cout << "     ";
        cout << "T" << i << ' ';
        tableau[i].print();
        cout << endl << endl;
    }
    // print score
    cout << "Score:   ";
    cout << foundation[0].stored() + 
            foundation[1].stored() +
            foundation[2].stored() +
            foundation[3].stored() - 4;
    cout << endl << endl;

} // Canfield::printGame()

/////////////////////////// Menu actions /////////////////////////////

// Deals one card from the deck.
void Canfield::deal()
{
    if (!deck.isEmpty()) 
    {
        deck.enqueue(waste);
        waste = deck.dequeue();
    }
} // Canfield::deal()

// Performs one move.
void Canfield::move()
{
    // get info to pick up card(s)
    int card;
    cout << "From:" << endl
         << "[t] top of the tableau "
         << "[T] whole tableau "
         << "[d] deck "
         << "[r] reserve : ";
    
    from = getCommand();
    if (from == 't' || from == 'T') 
    {
        cout << "number : ";
        getNumber(fromId, NUM_SUITS); //gets from buffer too
    }
    
    // get info to place card(s)
    cout << "To: "
         << "[t] tableau "
         << "[f] foundation : ";
    to = getCommand();
    cout << "number : ";
    getNumber(toId, NUM_SUITS);
    card = getCard();

    // if info is good, do operation
    cout << "card to move: " << card << endl;
    // if card exists and move makes sense
    if (card != -1 && checkMove(card)) 
    {
        removeCard();
        addCard(card);
    }
    else 
    {
        cout << "Movement not permitted. "
             << "Strike any key to continue."; 
        cin.get();
        while (cin.get() != '\n') ; // Clear the line
    }
} // Canfield::move()

//////////////////////////////////////////////////////////////////////
// Functions that perform the actions for a move, in this order:
// get the card to move, check if it can be moved, 
// remove it from the old structure, add it to the new one
//////////////////////////////////////////////////////////////////////

// Determines what card is to be moved. Accessor method.
int Canfield::getCard()
{
    switch (from) 
    {
    case 'd':
    case 'D':
        return waste;
    case 'r':
    case 'R':
        if (!reserve.isEmpty())
            return reserve.top();
        else
            return -1;
    case 't':
        if (!tableau[fromId].isEmpty())
            return tableau[fromId].top();
        else
            return -1;
    case 'T':
        if (!tableau[fromId].isEmpty())
            return tableau[fromId].bottom();
        else
            return -1;
    default:
        return -1;
    }  
} // Canfield::getCard()

// Checks if the requested movement is possible. Accessor method.
bool Canfield::checkMove(int card)
{
    if (to == 't' || to == 'T') 
        // one can always move anything to an empty tableau
        if (tableau[toId].isEmpty()) 
            return true;
        else
            return (tableau[toId].top() == card+1 || 
                    tableau[toId].top() == 1 && card == NUM_RANKS) ;
	// One can place a card on the top of the tableau if it's one
	// card smaller than the top of that tableau. One can also
	// place a 13 over a 1.
    else if (to == 'f' || to == 'F') 
    {
        if (from == 'T' && tableau[fromId].stored() != 1)
            return (foundation[toId].top() + 1 == 
                    tableau[fromId].top());
        return (foundation[toId].top() == card-1);
    }
    return false; // Anything else is not permitted.
} // Canfield::checkMove()

// Removes the card to be moved. Mutator method.
void Canfield::removeCard()
{
    int error=0;
    switch (from) 
    {
    case 'd':
    case 'D':
        if (!deck.isEmpty())
            waste=deck.dequeue();
        else
            waste=-1;
        break;
    case 'r':
    case 'R':
        if (!reserve.isEmpty())
            reserve.pop();
        else 
            error = 1;
        break;
    case 't':
        if (!tableau[fromId].isEmpty()) 
            tableau[fromId].pop();
        else 
            error = 2;
        break;
    case 'T':
        if (!tableau[fromId].isEmpty())
            ;
        else 
            error = 3;
        break;
    }
    if (error) 
    {
        cout << "Error in the code: " << error << endl;
        exit(1);
    }
} // Canfield::removeCard()

// Adds the card or the entire tableau to its new destination. 
// Mutator method.
void Canfield::addCard(int card)
{
    if (from == 'T' && (to == 't' || to == 'T')) 
    {
        // attach the bottom of to tableau to top of other
        // from_tab{top}+to_tab{bottom} -> from_tab's location
        tableau[fromId].concatenate(tableau[toId]);
        // move this stack to to_tab's location
        tableau[toId].concatenate(tableau[fromId]);
    }
    else if (from == 'T' && (to == 'f' || to == 'F')) 
    {
        // move one stack to another
        while (!(tableau[fromId].isEmpty()))
            foundation[toId].push(tableau[fromId].pop());
    }
    else if (to == 't' || to == 'T') 
            tableau[toId].push(card);
        else 
            foundation[toId].push(card);
} // Canfield::addCard()

// Redoes the last move command. Called with 'r' in game.
// can be used repeately, will repeat any move command added to 
// the history list 
void Canfield::redo() 
{
    if (history.getSize() != 0)
    {
        int mIndex = 0;
        for (int i = 0 ; i < history.getSize() ; i++)
        {
            if (history[i] == 'm')
            {
                mIndex = i;
                break;
            }
        }
    
        histIndex = mIndex; 
        char ans;
       
        if (mIndex == 0)
            performAction('0');
        else
        {
            ans = getCommand();
            performAction(ans);
        }
    }
} // Canfield::redo() 

// returns and stores buffer input. Also allows for easier automation
// and repetition of commands.
char Canfield::getCommand()
{
    char temp;

    //decides to get new input or give old input
    if (histIndex == -1)
    {
        cin >> temp;
        if (temp != 'r') // storing repeat r can create loops
            history.insertFront(int(temp));
    }
    else
    {
        temp = char(history[histIndex]);
        histIndex--;
    }

    return temp;
} // Canfield::getCommand()

// Reads a number between 0 and the limit. If the user enters
// something outside the limit, they are asked to enter the number
// again.
void Canfield::getNumber(int &n, int limit)
{
    //domain is single digits so this is fine
    n = char(getCommand() - '0'); 
    while (n < 0 || n >= limit) 
    {
        cout << "Please enter a number between 0 and " << limit 
             << endl;
        n = char(getCommand() - '0'); 
    }
} // Canfield::getNumber()

// increases the challenge rating by keeping tableaus from being empty
// tableau == {} and reserve != {} -> move reserve to tableau
void Canfield::autostep()
{
    for (int i = 0 ; i < NUM_SUITS ; i++)
        if (tableau[i].stored() == 0 && reserve.stored() != 0)
        {
            // do move action by throwing commands onto the list
            // and running move()
            history.insertFront(int('m')); 
            history.insertFront(int('r'));
            history.insertFront(int('t'));
            history.insertFront(i+'0'); //actions use ascii
            histIndex += 3;
            performAction('m');
        }
} // Canfield::autostep()

// This checks if the game has been won. Implementation is in main
// play loop.
void Canfield::checkWinCondition()
{
    // check if all foundations are the winning size (14)
    for (int i = 0 ; i < NUM_SUITS ; i++)
       if (foundation[i].stored() != NUM_RANKS + 1)
           return;
    
    cout << "\n\n\nCongrats! You won! :D\n\n";

    performAction('q');
} // Canfield::checkWinCondition()
