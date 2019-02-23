// name:     Jordan Winkler
// date:     3/1/2017
// homework: 3
// process:  Adds a struct of type img, then asks the user what 
//           they want to do. They can: add_head, add_tail, 
//           add_id, delete_id, delete_head, and delete_tail. 
//           They can also list_nodes and list_id to see what 
//           is happening. 
//           (optional) 
//           Resequencing can be done to preserve id, or to 
//           relable links 0,1,2,...,n. There is also a clear
//           screen option for bash terminals.


#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

struct img
{
    int id;
    char pxls[512][512];
    img* next;
};

int add_head(img*& head, int Id); 
int add_head(img*& head); 
img* add_head();

int add_tail(img* head); 

int add_id(img*& head, int Id); 

int delete_id(img*& head, int Id); 

int delete_head(img*& head);

int delete_tail(img*& head);
    
void list_nodes(img* head);

void list_id(img* head); 

int getInt();

void list_nodes(img* head);

void zero_pxls(img* node);

void clear_screen();

void sequence_list(img*& head);

void quickSort(img* arr[], int left, int right);


int main ()
{
    img* head = add_head();
    int UserInput;
    int Id;
    char Continue;

    do 
    {
        clear_screen();
        cout << "choose:\n"
             << "------------------\n"
             << "add_head       (1)\n"
             << "add_tail       (2)\n"
             << "add_id         (3)\n"
             << "delete_id      (4)\n"
             << "delete_head    (5)\n"
             << "delete_tail    (6)\n"
             << "list_nodes     (7)\n"      
             << "list_id        (8)\n"
             << "quit           (0)\n\n";

        UserInput = getInt();
        
        switch (UserInput)
        {
            case 1: add_head(head);     break;
            case 2: add_tail(head);     break;
            case 3: cout << "ID: ";
                    Id = getInt();
                    add_id(head, Id);   break;
            case 4: cout << "ID: ";
                    Id = getInt();
                    delete_id(head,Id); break;
            case 5: delete_head(head);  break;
            case 6: delete_tail(head);  break;
            case 7: list_nodes(head);   break;
            case 8: list_id(head);      break;
            case 0: clear_screen();
                    return 0;           break;
            default: cout << "Error: bad user input"; return 0;
        }
        Continue = cin.get(); //for pause between screen clears
    } while (UserInput != 0);

    return 0;
}



/****************************************************************
| Name: zero_pxls
|    
| Precodition: there exists a struct called img, with an array 
|              called pxls 512 by 512
| Postcondition: the pxls has been cleaned of random data
|
| Parameters:
|       
|   IN: pointer to an img
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void zero_pxls(img* node)
{
    for (int j = 0 ; j < 512 ; j++)
        for (int i = 0 ; i < 512 ; i++)
            node->pxls[i][j] = 0;
}

/****************************************************************
| Name: add_tail
|    
| Precodition: there exists a struct called img, or a list of
|              them.
| Postcondition: another img is added to the list
|
| Parameters:
|       
|   IN: pointer to the beginning of the chain of img
|   Out: Nothing
|   
| Returns: 0 for success, 1 for failure
\****************************************************************/
int add_tail(img* head)
{
    /* fail if no head to add to */
    if (head == NULL)
    {
        return 1;
    }

    /* add new image to the tail */
    img* p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = new img;
    p->next->next = NULL;

    /* zero out the pixels */
    zero_pxls(p->next);

    /* assign next sequential integer to image id */
    int ID = p->id;
    ID++;
    p->next->id = ID;

    return 0;
}

/****************************************************************
| Name: add_head
|    
| Precodition: there exists an struct called image
| Postcondition: a new linked list or adding to the front of
|                an existing one
|
| Parameters:
|       
|   IN: Nothing if creating new list, pointer to head if adding
|       an element
|   Out: pointer to head if working on existing list
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int add_head(img*& head, int Id) 
{
    /* Add new image to the head of the list */
    img* p = new img;
    p->next = head;
    head = p;

    /* zero out the pixels */
    zero_pxls(p);

    /* resequence image id */

    sequence_list(head); //if you want to preserve id

/*
    int i = Id; //otherwise
    while(p)
    {
        p->id = i++;
        p = p->next;
    }
*/

    return 0;
}
int add_head(img*& head)
{
    /* Add new image to the head of the list */
    img* p = new img;
    p->next = head;
    head = p;

    /* zero out the pixels */
    zero_pxls(p);

    /* resequence image id */
    sequence_list(head); //if you want to preserve id
/*
    int i = 0; //otherwise
    while(p)
    {
        p->id = i++;
        p = p->next;
    }
*/

    return 0;
}
img* add_head()
{
    img* head = new img;
    head -> id = 0;
    head -> next = NULL;
    return head;
}

/****************************************************************
| Name: add_id
|    
| Precodition: There exists a list of structs called img
| Postcondition: an img of the given id is added to the list
|
| Parameters:
|       
|   IN: pointer to start of list, int of Id to look for
|   Out: Nothing
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int add_id(img*&head, int Id)
{
    /* handling adding id <= head->id */
    if (Id < head->id)
    {
        add_head(head, Id);
        return 0;
    }
    if (Id == head->id)
        return 1;
    
    /* get to Id */
    img* p = head; //lead
    img* q = head; //stays one step behind
    while (p->id < Id && p->next != NULL)
    {
        q = p;
        p = p->next;
    }   

    /* handling Id is at spot */
    if (p-> id == Id)
        return 1;

    /* handling Id is not at spot */
    if (p->id != Id)
    {
        img* r = p->next;
        p->next = new img;
        p->next->next = r;
        p->next->id = Id;
        zero_pxls(p->next);

        return 0;
    }
}

/****************************************************************
| Name: delete_id
|    
| Precodition: a list of structs called img
| Postcondition: an element of given id removed
|
| Parameters:
|       
|   IN: pointer to beginnning of list, Id of struct to be removed
|   Out: nothing
|   
| Returns: 0 if success, 1 if failure
\****************************************************************/
int delete_id(img*& head, int Id)
{
    /* handling id is head */
    if (head->id == Id)
    {
        delete_head(head);
        return 0;
    }

    /* removes the image with a given id */
    img* p = head; //lead
    img* q = head; //stays one step behind

    /* get to id or end */
    while (p->id < Id && p->next != NULL) 
    {
        q = p;
        p = p->next;
    }

    /* handling if id is here */
    img* r = p->next; 
    if (p->id == Id) 
    {
        delete q->next;
        q->next = r; 
    }

    return 0;
}

/****************************************************************
| Name: delete_head
|    
| Precodition: the exists a struct named img, or a list of them
| Postcondition: the head has been removed
|
| Parameters:
|       
|   IN: pointer to the begining of the list
|   Out: pointer to the begining of the list
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int delete_head(img*& head)
{
    /* handling if no list elements */
    if (head == NULL) 
    {
        return 1;
    }
     
    /* handling if there is only a head */
    if (head -> next == NULL) 
    {
        delete head;
        head = NULL;
        return 0;
    }

    /* handling x > 1 elements */
    if (head -> next != NULL) 
    {
        img* tmp = head -> next;
        delete head;
        head = tmp;
        return 0;
    }
}

/****************************************************************
| Name: delete_tail
|    
| Precodition: the exists a list of structs called img
| Postcondition: the end element of the list has been removed
|
| Parameters:
|       
|   IN: pointer to head
|   Out: pointer to head
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int delete_tail(img*& head)
{
    
    img* p = head; //lead
    img* q = head; //stays 1 behind lead

    /* head -> null, no linked list */
    if (p == NULL) 
    {
        return 1;
    }

    /* list has only one element */
    if (p -> next == NULL) 
    {
        delete head; 
        head = NULL;    
        return 0;
    }

    /* handling list elements > 1 */
    while (p -> next != NULL) 
    {
        q = p; 
        p = p -> next;
    }
    delete q -> next;
    q -> next = NULL;

    return 0;
}

/****************************************************************
| Name: list_nodes
|    
| Precodition: there exists a list of struct img
| Postcondition: the locations are printed to the terminal
|
| Parameters:
|       
|   IN: pointer to the beggining of the list
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void list_nodes(img* head)
{
    cout << "list of nodes\n";
    img* p = head;
    while (p)
    {
        cout << p << endl;
        p = p->next;
    }
    cout << p << "\n\n";
}

/****************************************************************
| Name: list_id
|    
| Precodition: there exists a list of struct called img
| Postcondition: the id's of the list are printed to the terminal
|
| Parameters:
|       
|   IN: pointer to the beggining of the list
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void list_id(img* head)
{
    cout << "list of ID\n";
    img* p = head;
    while (p)
    {
        cout << p->id << endl;
        p = p->next;
    }
    cout << endl;
}

/****************************************************************
| Name: getInt
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  none
|   Out: none
|   
| Returns: an int from the user
\****************************************************************/
int getInt()
{
	const int ARRAY_SIZE = int(log10(pow(2, sizeof(int)*8))+1);
	char UserInput[ARRAY_SIZE] = {0};
	int ArraySpot = 0;
	int Rows = 0;

	do 
	{
		UserInput[ArraySpot] = cin.get();
		if (ArraySpot > ARRAY_SIZE)
		{
			cout << "\nSmaller number please\n";
			exit(1);
		}
	} while ( UserInput[ArraySpot++] != '\n');
	for (int i = 0 ; i < ArraySpot - 1 ; i++)
	{
		if (UserInput[i] <= '9' && UserInput[i] >= '0')
		{
			Rows += int(UserInput[i] - '0');
			Rows *= 10; 
		}
		else 
		{
			cout << "\nError: not a positive integer\n";
			exit(1);
		}
	}
	return Rows /= 10;
}

/****************************************************************
| Name: clear_screen
|    
| Precodition: there is a terminal screen
| Postcondition: it has been cleared
|
| Parameters:
|       
|   IN: None
|   Out: None
|   
| Returns: Nothing
\****************************************************************/
void clear_screen()
{
    /* for bash users */
    system("clear"); 

    /* in general */
//  for (int i = 0 ; i < 500 ; i++) cout << endl; 
}

/****************************************************************
| Name: sequence_list
|    
| Precodition: there is a list
| Postcondition: the list is sequenced from low to high
|
| Parameters:
|       
|   IN: pointer to img called head
|   Out: pointer to img called head
|   
| Returns: nothing
\****************************************************************/
void sequence_list(img*& head)
{
    /* get length of list */
    img* p = head; 
    int length = 0;
    while (p)
    {
        length++;
        p = p->next;
    }

    /* create array for list */
    img** list = new img*[length+1]; 

    /* point at each object */
    p = head; 
    int index = 0;
    while (p)
    {
        list[index] = p;
        
        index++;
        p = p->next;
    }

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/

    quickSort(list, 0, length-1); 

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/   
    
    /* fix img.next's */
    head = list[0];
    for (int i = 0 ; i < length-1 ; i++) 
    {
        list[i]->next = list[i+1];
    }
    list[length-1]->next = NULL;

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/

    delete [] list;
}

/****************************************************************
| Name: quicksort
|    
| Precodition: an array; 
|               information on the begining and end of the array
| Postcondition: a sorted array
|
| Parameters:
|       
|   IN: struct pointer array, int for start and end
|   Out: same array 
|   
| Returns: nothing
\****************************************************************/
void quickSort(img* arr[], int left, int right) 
{
      int i = left, j = right;
      img* tmp;
      int pivot = arr[(left + right) / 2]->id;
 
      /* partition */
      while (i <= j) {
            while (arr[i]->id < pivot)
                  i++;
            while (arr[j]->id > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;

                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

/*


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

1

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0
1


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0
1
2


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

3
ID: 10

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

3
ID: 5

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0
1
2
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

4
ID: 0

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
1
2
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

4
ID: 2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
1
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

5

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
1
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

6

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
1
10


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

3
ID: 5

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
1
10
5
11
12
13


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

7
list of nodes
0x7efe9b742010
0x7efe9b6c0010
0x254b4a0
0x248b440
0x24cb460
0x250b480
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

1

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
1
5
10
11
12
13


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

7
list of nodes
0x258b4c0
0x7efe9b742010
0x254b4a0
0x7efe9b6c0010
0x248b440
0x24cb460
0x250b480
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

0

*/
