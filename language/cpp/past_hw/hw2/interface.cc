/*********************************************************************
  Authors:       Jordan Winkler, IUSB, CIS
                 Dana Vrajitoru, IUSB, CIS
                 William Knight, IUSB, CIS
  Class:         C243 Data Structures
  File name:     interface.cc
  Last updated:  Sep 9, 2017
  Description:   The functions that handle the communication with the
                 user.
*********************************************************************/

#include <iostream>
using namespace std;

#include "interface.h"

const int NUMBER_OF_MENU_ITEMS = 21;

/*************  R U N   T H E   A C T I O N S   L O O P  *************

This function creates two empty linked lists that can be manipulated 
by the interactive user of this program.  It then goes into a loop 
that repeatedly
(1) prints a menu of list actions for the user to choose from,
(2) reads the number of the menu item (action) selected by the user,
(3) attempts to carry out the action selected.
Documented by W. Knight. Coded by W. Knight, modified by Dr. Vrajitoru 
and Jordan Winkler. */

void runTheActionsLoop ()
{
    List     first, second;  // The linked lists in the program.
    int      actionNumber;
    bool     timeToQuit;   // Will be set to true when the user wants to quit.
  
    cout << "\nThe program has now created two empty lists"
         << " indexed at 0.\n"
         << "Press the Enter key to see a menu of operations you can"
         << " perform: ";

    while (cin.get() != '\n') ;   // Clear the user's line.
    cout << endl;                 // Echo their end of line character.

    do // main loop of the program
    {
        printMenu ();
      
        actionNumber = actionFromUser ();
      
        timeToQuit = carryOutTheAction (actionNumber, first, second);

    }  while (! timeToQuit);
} // runTheActionsLoop ()

/**********************  P R I N T   M E N U  ************************

This function prints a menu of possible actions that the interactive
user can choose to perform on the linked list in the program.
Documented by W. Knight.  Coded by W. Knight, modified by
Dr. Vrajitoru, and Jordan Winkler.  */

void printMenu ()
{
    cout << " 0) EXIT FROM THE PROGRAM.\n";
    cout << " 1) Combine the lists by attaching the second to the first.\n";
    cout << " 2) Copy the second list to the first after destroying first.\n";
    cout << " 3) Count the number of negative values in the first list.\n";
    cout << " 4) Destroy the first list (i.e., cause it to become empty).\n";
    cout << " 5) Insert a number at the front of the first list.\n";
    cout << " 6) Insert a number at the front of the second list.\n";
    cout << " 7) Insert a number at the back of the first list.\n";
    cout << " 8) Insert a number at the back of the second list.\n";
    cout << " 9) Print all the data in the first list.\n";
    cout << "10) Print all the data in the second list.\n";
    cout << "11) Print the last number in the first list.\n";
    cout << "12) Test whether the 1st list is ordered.\n";
    cout << "13) Test whether the two lists are alike.\n";
    cout << "14) Sort the first list.\n";
    cout << "15) Remove the first node from the first list.\n";
    cout << "16) Compute the sum of list elements.\n";
    cout << "17) Print nth element of first list\n";
    cout << "18) Insert a number at n+1 location of first list.\n";
    cout << "19) Print min element of first list.\n";
    cout << "20) Print index a value, if it is in the list.\n";

} // printMenu()

/*****************  A C T I O N   F R O M   U S E R  ****************/
// Reads the user's choice and asks for it again if the choice is not
// a valid one.
// Coded by W. Knight.

int actionFromUser ()
{
    int choice;

    cout << "\nType a choice from the menu (it will be echoed): ";
    cin  >> choice;
    cout << choice << endl;  // Echo the user's choice.

    while ( !cin.good() || choice < 0 || choice >= NUMBER_OF_MENU_ITEMS )
    {
        cout << "\nYou must enter a number from the menu.\n"
             << "Please try again.\n\n";
      
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by the user.

        cout << "\nYour choice from the menu: ";
        cin  >> choice;
        cout << choice << endl;  // Echo the user's choice.
    }

    while (cin.get() != '\n') ; // Clear rest of line after the user's
    // choice
    return choice;
} // actionFromUser()

/************  C A R R Y   O U T   T H E   A C T I O N  **************

This function attempts to carry out an action on a linked list pointed
to by the parameter "front".  The action is indicated by the parameter
"choice".  The function consists almost entirely of a lengthy switch
statement that calls the appropriate list function and then reports
the results of the call.  Documented by W. Knight. Coded by
W. Knight, modified by Dr. Vrajitoru, and Jordan Winkler.  */
 
bool carryOutTheAction (int choice, List & first, List & second)
{
    cout << "\n\n\n\n" << endl;

    switch (choice) 
    {
    case 0:  
        cout << endl << endl;
        return true;  // It's time to quit the program.
    case 1:  
        concatenateAction(first, second);    
        break;
    case 2:  
        replaceAction(first, second);
        break;
    case 3:  
        cout << "The first list contains " << first.countNegative()
             << " negative numbers." << endl;
        break;
    case 4:  
        destroyAction(first); 
        break;
    case 5:  
        insertFrontAction(first);
        break;
    case 6:  
        insertFrontAction(second);
        break;
    case 7:  
        insertBackAction(first);
        break;
    case 8:  
        insertBackAction(second);
        break;
    case 9:  
        cout << "Here is the content of the first list:\n";
        first.print();
        break;
    case 10:  
        cout << "Here is the content of the second list:\n";
        second.print();
        break;
    case 11:  
        first.printLast();
        break;
    case 12: 
        isOrderedAction(first);
        break;
    case 13: 
        compareAction(first, second);
        break;
    case 14:
        first.selectionSort();
        cout << "Here is the content of the sorted list:\n";
        first.print();
        break;
    case 15:
        first.removeFront();
        cout << "Here is the content of the list after removing "
            "the first number:\n";
        first.print();
        break;
    case 16:
        cout << "Sum of all elements: " << first.sum() << endl;
        break;
    case 17:
        retrieveAtAction(first);
        break;
    case 18:
        insertAfterAction(first);
        break;
    case 19:
        cout << "min(first) = " 
             //list => iterator => iterator => datum
             << *(first.begin().min()) << endl;
        break;
    case 20:
        findNumberAction(first);
      
    } // end of switch statement
  
    cout << "\nPress the Enter key to continue. ";
    while (cin.get() != '\n') ; // Clear the line
    cout << endl;                 // Echo their end of line character.

    return false;  // Do not quit the program.
} // carryOutTheAction ()

// Concatenate the lists and write appropriate messages.
void concatenateAction(List & first, List & second)
{
    first.concatenate(second);
    cout << "The second list has been attached to the first.\n";
    if (!second)
        cout << "The second list is now empty.\n";
    else
        cout << "Second list should now be empty, but it's not.\n";
} // concatenateAction()

// Replace action: destroy the first list and then copy the second one
// to it.
void replaceAction(List & first, List & second)
{
    first.makeEmpty();
    first = second;
    cout << "The two lists should now be identical.\n";
} // replaceAction()

// Empty the first list action.
void destroyAction(List &first)
{
    first.makeEmpty();
    if (!first)
        cout << "The first list is now empty.\n";
    else
        cout << "The first list should be empty, but it's not.\n";
} // destroyAction()

// Inputs a number and inserts it at the front of the given list.
void insertFrontAction(List &first)
{
    int number;
    cout << "\nEnter the number to be added: ";
    cin  >> number;
    while ( !cin.good() ) 
    {
        cout << "\nAn integer number is required.\n"
             << "Please try again.\n\n";
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by user.
    }
    cout << number << endl;  // Echo the number.

    while (cin.get() != '\n');  // Clear the line

    first.insertFront (number);
} // insertFrontAction()

// Inputs a number and inserts it at the back of the given list.
void insertBackAction(List &first)
{
    int number;
    cout << "\nEnter the number to be added: ";
    cin  >> number;
    while ( !cin.good() ) 
    {
        cout << "\nAn integer number is required.\n"
             << "Please try again.\n\n";
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by user.
    }
    cout << number << endl;  // Echo the number.

    while (cin.get() != '\n');  // Clear the line

    first.insertBack (number);
} // insertBackAction()

// Checks if the list is ordered and prints the appropriate message.
void isOrderedAction(List &first)
{
    if (first.isOrdered())
        cout << "The list is ordered." << endl;
    else
        cout << "The list is not ordered." << endl;
} // isOrderedAction()

// Compares the two lists and prints the appropriate message.
void compareAction(List & first, List & second)
{
    if (first == second)
        cout << "The lists contain the numbers in the same order.\n";
    else
        cout << "The lists are not alike.\n";
} // compareAction()

// prompts user for index. Inserts a node after a given index.
void insertAfterAction(List &first)
{
    if (first.getSize() == 0)
    {
        cout << "List is empty. "
             << "Need an element to add after an element. "
             << "Ignoring operation.\n";
        return;
    }
    int index, number;
    cout << "\nEnter n: ";
    cin  >> index;
    while ( !cin.good() ) 
    {
        cout << "\nAn integer n is required.\n"
             << "Please try again.\n\n";
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by user.
    }
    cout << index << endl;  // Echo the number.

    while (cin.get() != '\n');  // Clear the line

    if (index-1 > first.getSize() || index < 0) // test if makes sense
    {
        cout << "Bad index. List size: " 
             << first.getSize() 
             << " Ignoring operation.\n";
        return;
    }

    cout << "\nEnter the number to be added: ";
    cin  >> number;
    while ( !cin.good() ) 
    {
        cout << "\nAn integer number is required.\n"
             << "Please try again.\n\n";
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by user.
    }
    cout << number << endl;  // Echo the number.

    while (cin.get() != '\n');  // Clear the line

    //create list iterator and get it into position
    ListIterator properIndex(first.nodeAtPosition(index));

    //run action
    first.insertAfter(properIndex, number);
} // insertAfterAction(List &first)

// prompts user for an index in the list
// if valid gives the user the datum of that
// list item
void retrieveAtAction(List &first)
{
    if (first.getSize() == 0)
    {
        cout << "List is empty. "
             << "Need an element to get data from.\n"
             << "Ignoring operation.\n";
        return;
    }

    int index;
    cout << "\nEnter n: ";
    cin  >> index;
    while ( !cin.good() ) 
    {
        cout << "\nAn integer n is required.\n"
             << "Please try again.\n\n";
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by user.
    }
    cout << index << endl;  // Echo the number.

    while (cin.get() != '\n');  // Clear the line

    if (index-1 > first.getSize() || index < 0) // test if makes sense
    {
        cout << "Bad index. List size: " 
             << first.getSize() 
             << " Ignoring operation.\n";
        return;
    }

    cout << "first[index] = " << first[index] << endl;
} // void retrieveAtAction(List &first)

// Prompts the user for a number.
// Finds the first instance of a number in the list 
// and gives back the index of it to the user
void findNumberAction(List &first)
{

    if (first.getSize() == 0)
    {
        cout << "List is empty. "
             << "Ignoring operation.\n";
        return;
    }

    int number;
    cout << "Enter a number. ";
    cin  >> number;
    while ( !cin.good() ) 
    {
        cout << "\nAn integer number is required.\n"
             << "Please try again.\n\n";
        cin.clear();                 // Reset the "good" bit.
        while (cin.get() != '\n') ;  // Clear line entered by user.
    }
    cout << number << endl;  // Echo the number.

    while (cin.get() != '\n');  // Clear the line

    for (int i = 0 ; i < first.getSize() ; i++)
    {
        // find by [] is slower than direct manipulation but
        // faster than using the iterator. Also much easier to read.
        if (number == first[i]) 
        {
            cout << "First instance of number found at "
                 << i << "." << endl;
            return;
        }
    }

    cout << "Number not found in list.\n";
} // void findNumberAction(List &first)

