//made by: Jordan Winkler
//takes a string and puts it in a linked list, prints that list

#include <iostream>
using namespace std;

//is used to capture the string as a list
struct dll
{
    char symbol;
    dll* prev;
    dll* next;
};

dll* add_head(char character);
dll* add_tail(dll* head, char character);

void print_list(dll* head);
void print_debug(dll* head);

//formalize statement

void mult_before_paren(dll* head, int strLength);
void add_symmetry(dll* head, int strLength);

int main (int argc, char* argv[])
{
    //repeat entered string
    cout << "starting phrase: ";
	for (int i = 1 ; i < argc ; i++)
	    cout << argv[i] << ' ';
	cout << endl;

	int stringLength = 0;

	cout << "first word: ";
	if (argc > 0)
	{
		for (int i = 0 ; argv[1][i] ; i++)
		{
	    	cout << argv[1][i];
			stringLength++;
		}
		cout << endl;
	}

	//make and add each element to string
    dll* head = add_head(argv[1][0]);
	for (int i = 1 ; argv[1][i] ; i++)
	{
		add_tail(head, argv[1][i]);
	}

	//print out doubly linked list
	cout << "first word, according to list: ";
	print_list(head);	

	add_symmetry(head, stringLength);

	cout << "first word, after change: ";
	print_list(head);	

	return 0;
}

dll* add_tail(dll* head, char character)
{
	while (head -> next != NULL)
		head = head -> next;

	dll* tail = new dll;
	head -> next = tail;
	tail -> prev = head;
	tail -> next = NULL;
	
	tail -> symbol = character;

	return tail;
}

dll* add_head(char first)
{
    dll* head = new dll;
	head -> prev = NULL;
	head -> next = NULL;

	head -> symbol = first;

	return head;
}

void print_list(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << p -> symbol;
		p = p -> next;
	}
	cout << p -> symbol;
	cout << endl;
}

void print_debug(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << "prev: " << p -> prev << endl;
		cout << "node: " << p << endl;
		cout << "next: " << p -> next << endl;
		cout << "char: " << p -> symbol << endl;
		p = p -> next;
	}
	cout << "prev: " << p -> prev << endl;
	cout << "node: " << p << endl;
	cout << "char: " << p -> symbol << endl;
}

//a(b+c) = a*(b+c) or a(b) = a*(b) or a(b+...+c) = ..
void mult_before_paren(dll* head, int strLength)
{
    int minLength = 4;
	dll** p = new dll*[minLength];
    if (strLength >= minLength)
	{
		p[0] = head;
		p[1] = head->next;
		p[2] = head->next->next;
		p[3] = head->next->next->next;
	}
	else return;
	
	do
	{
    	if (p[0]->symbol != '*')
			if (p[1]->symbol == '(');
				//get to later
	} while (0);
}

//a-b = a+-b
void add_symmetry(dll* head, int strLength)
{
    int minLength = 3;

	dll** p = new dll*[minLength];
    if (strLength >= minLength)
	{
		p[0] = head;
		p[1] = head->next;
		p[2] = head->next->next;
	}
	else return;
	
	do
	{
    	if (p[0]->symbol != '+')
		  if (p[1]->symbol == '-')
		  {
			dll* q = new dll;
			q->symbol  = '+';
			q->prev    = p[0];
			q->next    = p[1];
			p[0]->next = q;
			p[1]->prev = q;
		  }
	} while (0); //just do once for now
}
	
