//*****************************************************************
//  LinkedList.h
//  LinkedList_Project
//
//  Created by Karlina Beringer on June 12, 2014.
//  This header file contains the LinkedList class declarations.
//*****************************************************************

//#ifndef LinkedList_h
//#define LinkedList_h

#include <iostream>
#include <string>
using namespace std;

//*****************************************************************
// Node structs contain data and a pointer to the next node.
// In this project, it will represent a song/artist combination.
//*****************************************************************
struct node
{
    string song;
    string artist;
    node * next;
};

//*******************************************************************
// LinkedList is a list of singly-linked nodes.
// In this project, it will represent a song playlist.
//*******************************************************************
class LinkedList
{
private:
    // Head of the list contains no song data, 
    // but points to the song playlist.
    node * head;
    int listLength;
    
public:
    // Default Constructor creates the head node.
    LinkedList();
    
    // Setter adds a node to the list at a given position.
    // Takes a node and list position as parameters.
    // Position must be between 1 and the number of data nodes.
    // Returns true if the operation is successful.
    bool insertNode( node * newNode, int position );
    
    // Setter removes a node by its given position.
    // Returns true if the operation is successful.
    bool removeNode( int position );

    // Prints each node in the list in consecutive order,
    // starting at the head and ending at the tail.
    // Prints list data to the console.
    void printList();
    
    // Destructor de-allocates memory used by the list.
    ~LinkedList();
};

//#endif

//----------------------------------------------------------------

//*****************************************************************
//  LinkedList.cpp
//  LinkedList_Project
//
//  Created by Karlina Beringer on June 12, 2014.
//  This source file contains the LinkedList class definitions.
//*****************************************************************

//#include "LinkedList.h"

// Default Constructor creates the head node.
LinkedList::LinkedList()
{
    head -> song = "head (contains no song data)";
    head -> artist = "head (contains no artist data)";
    head -> next = NULL;
    listLength = 0;
}

// Setter adds a node to the list at a given position.
// Takes a node and list position as parameters.
// Position must be between 1 and the number of data nodes.
// Returns true if the operation is successful.
bool LinkedList::insertNode( node * newNode, int position )
{
    if ((position <= 0) || (position > listLength + 1))
    {
        cout << "nError: the given position is out of range.n";
        return false;
    }
    if (head -> next == NULL) 
    {
        head -> next = newNode;
        listLength++;
        return true;
    } 
    int count = 0;
    node * p = head;
    node * q = head;
    while (q)
    { 
        if (count == position)
        {
            p -> next = newNode;
            newNode -> next = q;
            length++;
            return true;
        }
        p = q;
        q = p -> next;
        count++;
    }
    if (count == position)
    {
        p -> next = newNode;
        newNode -> next = q;
        listLength++;
        return true;
    }
    cout << "nError: node was not added to list.n";
    return false;
}

// Setter removes a node by its given position.
// Returns true if the operation is successful.
bool LinkedList::removeNode( int position )
{
    if ((position <= 0) || (position > listLength + 1))
    {
        cout << "nError: the given position is out of range.n";
        return false;
    }
    if (head -> next == NULL)
    {
       cout << "nError: there is nothing to remove.n";
       return false;
    }
    int count = 0;
    node * p = head;
    node * q = head;
    while (q) 
    {
        if (count == position)
        {
            p -> next = q -> next;
            delete q;
            listLength--;
            return true;
        }
        p = q;
        q = p -> next;
        count++;
    }
    cout << "nError: nothing was removed from the list.n";
    return false;
}

// Prints each node in the list in consecutive order,
// starting at the head and ending at the tail.
// Prints the data to the console.
void LinkedList::printList()
{
    node * p = head;
    node * q = head;
    cout << "n---------------------------n";
    cout << "Song Playlist n";
    while (q)
    {
        p = q;
        cout << "n-----------------------------n";
        cout << "t position: " << p -> count << endl;
        cout << "t song: " << p -> song << endl;
        cout << "t artist: " << p -> artist << endl;
        q = p -> next;
        count++;
    }
}

// Destructor de-allocates memory used by the list.
LinkedList::~LinkedList() 
{
    node * p = head;
    node * q = head;
    while (q)
    {
        p = q;
        q = p -> next;
        if (q) delete p;
    }
}


//-----------------------------------------------------------------

//*******************************************************************
//  main.cpp
//  LinkedList_Project
//
//  Created by Karlina Beringer on June 12, 2014.
//  This driver implements the LinkedList class.
//*******************************************************************

//#include "LinkedList.h"
using namespace std;

int main()
{
    // STEP 1: Create some unlinked song nodes.
    node * A = new node;
    A -> song = "We Are";
    A -> artist = "Vertical Horizon";
    
    node * B = new node;
    B -> song = "I Stand Alone";
    B -> artist = "Godsmack";
    
    node * C = new node;
    C -> song = "Heir Apparent";
    C -> artist = "Opeth";
    
    node * D = new node;
    D -> song = "Fear of the Dark";
    D -> artist = "Iron Maiden";
    
    node * E = new node;
    E -> song = "Blue Monday";
    E -> artist = "New Order";
    
    node * F = new node;
    F -> song = "The Moth";
    F -> artist = "Aimee Mann";
    
    // STEP 2: Build a list of three song nodes by appending to end of list.
    LinkedList myList;
    myList.insertNode(A, 1);
    myList.insertNode(B, 2);
    myList.insertNode(C, 3);
    myList.insertNode(D, 4);
    myList.printList();
    
    // STEP 3: Insert a node into middle of list.
    myList.insertNode(E, 2);
    myList.printList();
    
    // STEP 4: Insert node at the front of list.
    myList.insertNode(F,1);
    myList.printList();
    
    // STEP 5: Remove the last node from the list.
    myList.removeNode(6);
    myList.printList();
    
    // STEP 6: Remove the first node from the list.
    myList.removeNode(1);
    myList.printList();
    
    // STEP 7: Remove a node from the middle of the list.
    myList.removeNode(3);
    myList.printList();
    
    return 0;
}
