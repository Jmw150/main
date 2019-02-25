/*********************************************************************
  Author:        Jordan Winkler
  Class:         C243 Data Structures
  File name:     Queue.cc
  Last updated:  September 2017
  Description:   Implementation of a class Queue derived from a list.
**********************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

#include "Queue.h"

// Default constructor: create an empty Queue.
Queue::Queue() : List() 
{
} //Queue::Queue()

// Insert an object into the Queue.
void Queue::enqueue(int data)
{
    insertBack(data); // this should work for empty case
} // Queue::enqueue()

// Remove the front object and return its value.
int Queue::dequeue()
{
    int result = front();
    removeFront();
    return result;
} // Queue::dequeue() 

// Inspect the value of the front object.
int Queue::front()
{ 
    if (!isEmpty()) 
        return *begin();
    else 
    {
        cout << "attempt to access the front of an empty Queue" 
             << endl;
        exit(1);
    }  
} // Queue::front()

// Delete all the objects in the Queue.
void Queue::makeEmpty()
{ 
    List::makeEmpty(); 
}// Queue::makeEmpty()

// Test if the Queue is empty.
bool Queue::isEmpty()
{ 
    // return !(List)(*this); 
    return List::isEmpty();
} // Queue::isEmpty()

// Concatenate two Queues.
void Queue::concatenate(Queue &other)
{
    List::concatenate(other);
} // Queue::concatenate()

// The number of objects in the Queue.
int Queue::stored()
{
    return getSize();
} // Queue::stored()
