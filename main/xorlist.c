#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct xnode {
 int data;
 unsigned long direction;
};

struct xnode *add_data(int data, struct xnode* list);
void walk_list(struct xnode *list);

int main(void) {

 struct xnode *l2 = add_data(2, NULL);
 struct xnode *l1 = add_data(1, l2);
 struct xnode *l3 = add_data(3, l2);
 struct xnode *l4 = add_data(4, l3);
 
 printf("front -> back....\n");
 walk_list(l1);
 printf("back -> front....\n");
 walk_list(l4);

 return 0;
}

struct xnode *add_data(int data, struct xnode *list) {
 struct xnode *newxnode = malloc(sizeof(struct xnode));

 assert(newxnode);
 newxnode->direction = (unsigned long)list;
 newxnode->data = data;

 if(list != NULL)
  list->direction ^= (unsigned long)newxnode;

 return newxnode;
}

void walk_list(struct xnode *list) {
 unsigned long prev = 0;

 while(list != NULL) {
  unsigned long next = prev ^ list->direction;
  printf("%d ", list->data);
  prev = (unsigned long)list;
  list = (struct xnode *)next;
 }

 printf("\n");
}
