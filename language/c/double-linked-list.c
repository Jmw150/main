/* double linked list */
#include <stdio.h>
#include <stdlib.h>
 
struct List {
   struct MNode *head;
   struct MNode *tail;
   struct MNode *tail_pred;
};
 
struct MNode {
   struct MNode *succ;
   struct MNode *pred;
};
 
typedef struct MNode *NODE;
typedef struct List *LIST;
 
/*
** LIST l = newList()
** create (alloc space for) and initialize a list
*/
LIST newList(void);
 
/*
** int isEmpty(LIST l)
** test if a list is empty
*/
int isEmpty(LIST);
 
/*
** NODE n = getTail(LIST l)
** get the tail node of the list, without removing it
*/
NODE getTail(LIST);
 
/*
** NODE n = getHead(LIST l)
** get the head node of the list, without removing it
*/
NODE getHead(LIST);
 
/*
** NODE rn = addTail(LIST l, NODE n)
** add the node n to the tail of the list l, and return it (rn==n)
*/
NODE addTail(LIST, NODE);
 
/*
** NODE rn = addHead(LIST l, NODE n)
** add the node n to the head of the list l, and return it (rn==n)
*/
NODE addHead(LIST, NODE);
 
/*
** NODE n = remHead(LIST l)
** remove the head node of the list and return it
*/
NODE remHead(LIST);
 
/*
** NODE n = remTail(LIST l)
** remove the tail node of the list and return it
*/
NODE remTail(LIST);
 
/*
** NODE rn = insertAfter(LIST l, NODE r, NODE n)
** insert the node n after the node r, in the list l; return n (rn==n)
*/
NODE insertAfter(LIST, NODE, NODE);
 
/*
** NODE rn = removeNode(LIST l, NODE n)
** remove the node n (that must be in the list l) from the list and return it (rn==n)
*/
NODE removeNode(LIST, NODE);
 
 
LIST newList(void)
{
    LIST tl = malloc(sizeof(struct List));
    if ( tl != NULL )
    {
       tl->tail_pred = (NODE)&tl->head;
       tl->tail = NULL;
       tl->head = (NODE)&tl->tail;
       return tl;
    }
    return NULL;
}
 
int isEmpty(LIST l)
{
   return (l->head->succ == 0);
}
 
NODE getHead(LIST l)
{
  return l->head;
}
 
NODE getTail(LIST l)
{
  return l->tail_pred;
}
 
 
NODE addTail(LIST l, NODE n)
{
    n->succ = (NODE)&l->tail;
    n->pred = l->tail_pred;
    l->tail_pred->succ = n;
    l->tail_pred = n;
    return n;
}
 
NODE addHead(LIST l, NODE n)
{
    n->succ = l->head;
    n->pred = (NODE)&l->head;
    l->head->pred = n;
    l->head = n;
    return n;
}
 
NODE remHead(LIST l)
{
   NODE h;
   h = l->head;
   l->head = l->head->succ;
   l->head->pred = (NODE)&l->head;
   return h;
}
 
NODE remTail(LIST l)
{
   NODE t;
   t = l->tail_pred;
   l->tail_pred = l->tail_pred->pred;
   l->tail_pred->succ = (NODE)&l->tail;
   return t;
}
 
NODE insertAfter(LIST l, NODE r, NODE n)
{
   n->pred = r; n->succ = r->succ;
   n->succ->pred = n; r->succ = n;
   return n;
}
 
NODE removeNode(LIST l, NODE n)
{
   n->pred->succ = n->succ;
   n->succ->pred = n->pred;
   return n;
}

//////
/* basic test */
 
struct IntNode {
  struct MNode node;
  int data;
};
 
int main()
{
    int i;
    LIST lista;
    struct IntNode *m;
    NODE n;
 
    lista = newList();
    if ( lista != NULL )
    {
      for(i=0; i < 5; i++)
      {
          m = malloc(sizeof(struct IntNode));
          if ( m != NULL )
          {
             m->data = rand()%64;
             addTail(lista, (NODE)m);
          }
      }
      while( !isEmpty(lista) )
      {
            m = (struct IntNode *)remTail(lista);
            printf("%d\n", m->data);
            free(m);
      }
      free(lista);
    }
}


// data type
struct link 
{
  struct link *next;
  struct link *prev;
  void  *data;
  size_t type;
};

/* 
Production code should also include checks that the passed links are valid (e.g. not null pointers). There should also be code to handle special cases, such as when *anchor is the end of the existing list (i.e. anchor->next is a null pointer).
*/

void insert(link* anchor, link* newlink) {
  newlink->next = anchor->next;
  newlink->prev = anchor;
  (newlink->next)->prev = newlink;
  anchor->next = newlink;
}


// traversal code

// A doubly linked list of strings;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct sListEntry {
    const char *value;
    struct sListEntry *next;
    struct sListEntry *prev;
} *ListEntry, *LinkedList;
 
typedef struct sListIterator{
    ListEntry  link;
    LinkedList head;
} *LIterator;
 
LinkedList NewList() {
    ListEntry le = malloc(sizeof(struct sListEntry));
    if (le) {
        le->value = NULL;
        le->next = le->prev = NULL;
    }
    return le;
}
 
int LL_Append(LinkedList ll, const char *newVal) 
{
    ListEntry le = malloc(sizeof(struct sListEntry));
    if (le) {
        le->value = strdup(newVal);
        le->prev = ll->prev;
        le->next = NULL;
        if (le->prev) 
            le->prev->next = le;
        else
            ll->next = le;
        ll->prev = le;
    }
    return (le!= NULL);
}
 
int LI_Insert(LIterator iter, const char *newVal)
{
    ListEntry crnt = iter->link;
    ListEntry le = malloc(sizeof(struct sListEntry));
    if (le) {
        le->value = strdup(newVal);
        if ( crnt == iter->head) {
            le->prev = NULL;
            le->next = crnt->next;
            crnt->next = le;
            if (le->next)
                le->next->prev = le;
            else 
                crnt->prev = le;
        }
        else {
            le->prev = ( crnt == NULL)? iter->head->prev : crnt->prev;
            le->next = crnt;
            if (le->prev)
                le->prev->next = le;
            else
                iter->head->next = le;
            if (crnt) 
                crnt->prev = le;
            else 
                iter->head->prev = le;
        }
    }
    return (le!= NULL);
}
 
LIterator LL_GetIterator(LinkedList ll ) 
{
    LIterator liter = malloc(sizeof(struct sListIterator));
    liter->head = ll;
    liter->link = ll;
    return liter;
}
 
#define LLI_Delete( iter ) \
    {free(iter); \
    iter = NULL;}
 
int LLI_AtEnd(LIterator iter)
{
    return iter->link == NULL;
}
const char *LLI_Value(LIterator iter)
{
    return (iter->link)? iter->link->value: NULL;
}
int LLI_Next(LIterator iter)
{
    if (iter->link) iter->link = iter->link->next;
    return(iter->link != NULL);
}
int LLI_Prev(LIterator iter)
{
    if (iter->link) iter->link = iter->link->prev;
    return(iter->link != NULL);
}
 
int main() 
{
    static const char *contents[] = {"Read", "Orage", "Yeller", 
                                     "Glean", "Blew", "Burple"};
    int ix;
    LinkedList ll = NewList();    //new linked list
    LIterator iter;
 
    for (ix=0; ix<6; ix++)        //insert contents
        LL_Append(ll, contents[ix]);
 
    iter = LL_GetIterator(ll);    //get an iterator
    printf("forward\n");
    while(LLI_Next(iter))         //iterate forward
        printf("value=%s\n", LLI_Value(iter));    
    LLI_Delete(iter);             //delete iterator
 
    printf("\nreverse\n");
    iter = LL_GetIterator(ll);
    while(LLI_Prev(iter))         //iterate reverse 
        printf("value=%s\n", LLI_Value(iter));
    LLI_Delete(iter);
                        //uhhh-- delete list??
    return 0;
}
