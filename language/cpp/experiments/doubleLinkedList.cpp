// name:     Jordan Winkler
// date:     6/26/2017
// process:  c style double linked list, a special function was added
//           to allow changing what the double linked list 
//           carries

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

struct dll
{
    char symbol;
    dll* prev;
    dll* next;
};

dll* add_head();


/****************************************************************
| Name: add_head()
|    
| Precodition: 
| Postcondition: 
|
| Parameters:
|       
|   IN: 
|   Out: 
|   
| Returns: 
\****************************************************************/
dll* add_head()
{
    dll* head = new dll;
	head -> prev = NULL;
	head -> next = NULL;
	return head;
}

int add_char(dll* object);
int del_char(dll* object);
	

int main ()
{
    dll* head = add_head();
    

	return 0;
}
