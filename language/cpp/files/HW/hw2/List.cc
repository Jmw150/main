/*********************************************************************
  Author:        Jordan Winkler, IUSB, CIS
                 Dana Vrajitoru, IUSB, CIS
  Class:         C243 Data Structures
  File name:     List.cc
  Last updated:  Sep 9, 2017
  Description:   Implementation of a container class for a list.

*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "general.h"
#include "List.h"

// Default constructor.
List::List()
    : head(NULL), tail(NULL), size(0) // empty list
{
} // List::List()

// Copy constructor. The target object should be assigned a hard copy
// of the list contained in the data object.
List::List(const List &data)
    : head(NULL), tail(NULL), size(0) // start with an empty list
{
    *this = data; // then use the operator= form this class
} // List::List()

// Destructor.
List::~List()
{
    // call the function makeEmpty instead so that we only have to
    // change things in one place
    makeEmpty();
} // List::~List()

// Assignment operator. It must also make a hard copy of the
// list. Make sure that the tail of the target object is also set
// correctly.
List &List::operator=(const List &data)
{
    if (this != &data) // check that we're not assigning the object to itself
    {
        size = data.size;
        head = data.head->copy(); // make a copy of the list instead 
                                  // of assigning just the pointer 
        tail = head->lastNode();  // now we have to find the last node
                                  // because we've copied the list
    }

    return *this; 
} // List::operator=()

// Returns the size of the list.
int List::getSize()
{
    return size;
} // List::getSize()

// Inserts a new node with the specified content at the front of the
// list. It must make sure to update both the head and the tail of the
// list if need be.
void List::insertFront(int number)
{
    // create a node with the data and pointing towards the head
    ListNodePtr newNode = new ListNode(number, head);
    testAllocation(newNode);

    size++; // we're adding a node

    head = newNode; // this one becomes the head of the list

    if (size == 1)      // if it was the first one
        tail = newNode; // then it's also the tail
} // List::insertFront()

// Removes the node in the list after the one pointed to by the
// current in the iterator. If the iterator contains a NULL pointer,
// it removes the front node. It returns false if the list was empty
// and no node was removed.
bool List::removeNodeAfter(ListIterator iter)
{
    if (!iter) // current in iter is NULL
        return removeFront();
    else 
    {
        if (!iter.current->next) // iter is the last node
            return false; // nothing to remove in this case
        else
        {
            ListNodePtr temp = iter.current->next; // the node to delete
            iter.current->next = iter.current->next->next; // adjust links
            delete temp;
            size--;
            if (!iter.current->next) // if the node we deleted was the last one
                tail = iter.current; // then we have a new tail.
            return true;
        }
    }
} // List::removeNodeAfter()

// Checks if the list is empty.
bool List::isEmpty()
{
    return (size == 0); // we can check the size or the pointers
} // List::isEmpty()

// Converts to boolean. It must return true if the list is not empty,
// and false if it is.
List::operator bool()
{
    return !isEmpty(); // return true if the list is not empty
} // List::operator bool()

// Deletes the entire list and reset all the data.
void List::makeEmpty()
{
    if (size) // if the list is not empty
    {
        deleteList(head); // call the function from ListNode.cc
        head = NULL; // then reset the data
        tail = NULL;
        size = 0;
    }
} // List::makeEmpty()


// Difference operator - it must compare the content of the two lists
// and not just the pointers to them.
bool List::operator!=(const List &data)
{
    return !(*this == data); // call the operator== on the object,
                             // not on the pointer
} // List::operator!=()

// Concatenates the second list to the first and empties the second
// list.
void List::concatenate(List &data)
{
    if (head != data.head) // if the two lists are not the same
    {
        if (head) // if the first list is not empty
        {
            // call the ListNode function to add the second list 
            // to the tail of the first
            tail->concatenate(data.head); 
            size += data.size; // we also have to update the size
            if (data.tail)     // and the tail
                tail = data.tail;
        }
        else // if the first list is empty
        {
            // move the list from the second one into it
            head = data.head;
            size = data.size;
            tail = data.tail;
        }
        if (data) // if the second list was not empty, unlink/empty it
        {
            data.size = 0;
            data.head=NULL;
            data.tail=NULL;
        }
    }
    else // error
        cout << "Attepmt to concatenate a list to itself. "
             << "Operation ignored." << endl;
} // List::concatenate()
  
// Prints the last node in the list: the tail.
void List::printLast()
{
    if (tail) // check that we have a last node
        cout << "The last node in the list contains " 
             << tail->datum << endl;
    else
        cout << "The list is empty, it has no last node" << endl;
} // List::printLast()

/*******************************************************************/
// Functions using list iterators.

// Begining of the list returned as a list iterator.
ListIterator List::begin()
{
    return ListIterator(head); 
} // List::begin()

// End of the list returned as a list iterator.
ListIterator List::end()
{
    return ListIterator(tail);
} // List::end()

// Prints the list. We also want to know how many node are there in
// the list and if the list is empty.  I have rewriten this function
// using list iterators.
void List::print()
{
    // print the count first
    cout << "The list has " << size << " nodes." << endl;

    if (size)   // if the list is not empty
    {
        // print all the nodes using an iterator
        cout << "Here are the nodes of the list:" << endl;
        ListIterator iter(head); //start from the head
        while (iter) // while we haven't reached the end
        {
            cout << char(*iter) << ' '; // print the datum as char
            ++iter; // move to the next node
        }
        cout << endl;
    }
} // List::print()

// Finds the given number in the list and return a list iterator
// containing a pointer to the node containing the number in question.
// If the number is not in the list, it returns an iterator   
// where the pointer current is NULL.
ListIterator List::locate(int number)
{
    ListIterator locator = begin(); // start form the head
    while (locator && *locator != number) // while we haven't reached the end
                                          // nor found the target
        ++locator; // move to the next node
    return locator; // return the iterator containing the target
                    // or containing NULL if it wasn't there
} // List::locate()

// The bubble sort using list iterators.
void List::bubbleSort()
{
    if (head) // if the list is not empty
    {
        bool ordered = false;
        ListIterator iter1, iter2; // need two iterators
        while (!ordered) // while the list is not sorted
        {
            ordered = true; // we'll assume it is sorted
            iter1 = head;   // start form the head with one
            iter2 = head->next; // and the next with the other
            while (iter2) 
            {
                if (*iter1 > *iter2) // if two nodes are out of order
                {
                    iter1.swap(iter2); // swap their datums
                    ordered = false;   // and set the flag
                }
                ++iter1; // move both iterators at the same time
                ++iter2; // so they will allways be adjacent nodes
            }
        }
    }
} // List::bubbleSort()


// Comparison operator - it must compare the content of the two
// lists and not just the pointers to them.
bool List::operator==(const List &data)
{
    // compare length
    if ((*this).size != data.size)
    {
        return 0;
    }
    
    ListNodePtr a = (*this).head;
    ListNodePtr b = data.head;
    
    // compare contents
    while (a != NULL)
    {
        if (a->datum != b->datum)
        {
            return 0;
        }
        a = a->next;
        b = b->next;
    }
    return 1;
} // List::operator==()

// Inserts a new node with the specified content at the back of the
// list. Could be calling another class method if appropriate. 
void List::insertBack(int number)
{

    // create node
    ListNodePtr p = new ListNode;
    p->datum = number;
    p->next = NULL;

    // if list is empty, else go to tail pointer
    if (tail == NULL) 
    {
        head = p;
        tail = p;
    }
    else
    {
        tail->next = p; 
        tail = p; //move tail to the end
    }

    size++;

} // List::insertBack()

// Inserts a node after the node pointed to by current in the
// iterator. We assume that the existing node is part of the list. If
// current in the iterator is NULL, then the function should insert
// the new node at the front of the list. The function should update
// head, tail, and size properly.
void List::insertAfter(ListIterator iter, int number) 
{
    if (!iter) // current in iter is NULL
    {
        insertFront(number);
    }
    else if (!iter.current->next) // iter is the last node
    {
        insertBack(number);
    }
    else 
    {
        // create node
        ListNodePtr p = new ListNode;
        p->datum = number;

        // insert at n+1 spot in list, update size
        p->next = iter.current->next; 
        iter.current->next = p; 
        size++;
    }
} // List::insertAfter()

// Checks if the list is in ascending order.
bool List::isOrdered()
{
    for (int i = 1 ; i < size ; i++)
    {
        if ((*this)[i-1] > (*this)[i])
            return false;
    }
    return true; 
} // List::isOrdered()

// Counts the number of negative values in the list. If the list is
// empty, just return 0.
int List::countNegative()
{
    ListNodePtr p = head;
    int negatives = 0;
  
    // empty list case also checked in this loop
    while (p != NULL)
    {
        if (p->datum < 0)
            negatives++;
        p = p->next;
    }
    
    return negatives;

} // List::countNegative()

// Removes the front node from the list and delete the memory for the
// node to be removed. The function should return true if the list is
// not empty, and false if the list is already empty. The head and the
// tail (!) of the list should be updated correctly.  
bool List::removeFront()
{
     if (!head) // if the list is empty then there is nothing
        return false; // to delete
    ListNodePtr temp = head;
    head = head->next;
    delete temp;
    --size;
    if (!head) // we deleted the last node
        tail = NULL;
    return true; // Return true if we deleted a node
    /*
    ListNodePtr p = head;

    if (head == NULL)
        return 0;

    head = head->next;
    size--;
    delete p;

    return 1;
    */

} // List::removeFront()

// This function computes the sum of all the numbers stored in the
// list. It should be implemented using list iterators.
int List::sum()
{
    ListIterator p = head;
    int total = 0;
    while (ListNodePtr(p) != NULL)
    {
        total += *p;
        ++p; 
    }
    return total;
    /* same amount of code
    ListNode* p = head;
    int total = 0;
    while (p)
    {
        total += p->datum;
        p = p->next;
    }
    return total;
    */
} // List::sum()

// Returns the element i of the list in the form of a list iterator,
// where i=0 returns the first node of the list. If the list has less
// than i+1 nodes, then it should return a null iterator. Use the
// function move_forward from the class ListIterator.
ListIterator List::nodeAtPosition(int location)
{
    ListIterator start = begin();
    start.moveForward(location); // moveForward has null iterator
                                 // on error
    return start;
} // List::nodeAtPosition()

// This function should implement the selection sort on a list using
// list iterators.It should have an iterator scanning the list but
// stopping before the last node. For every position in the list, it
// would have to find the location of the minimal number in the list
// using a call to the appropriate function from the
// list_iterator. Then if the location of the minimum is not the same
// as the current node, swap the value of the current node with the
// minimum.
void List::selectionSort() 
{
    ListIterator minNode;
    
    for (int i = 0 ; i < size ; i++)
    {
        // get min
        minNode = (*this).begin().moveForward(i).min();
        
        // swap min with current i
        (*this).begin().moveForward(i).swap(minNode);
    }
} // List::selectionSort()

// [] operator functions like safe arrays
int List::operator[](int index)
{
    if (index-1 > size || index < 0)
    {
        cout << "invalid size for [] operation."
             << "ending program\n";
        exit(1);
    }
    ListNodePtr p = head;
    for (int i = 0 ; i < index ; i++)
    {
        p = p->next;
    }
    return p->datum;
}


void List::display()
{
    if (size)
    {
        ListIterator iter(head);
        while (iter)
        {
            cout << setw(2) << *iter << ' ';
            ++iter;
        }
    }
} // List::display()
