#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product { 
	float price; 
	char productName[30]; 
	
	struct product *next;
}; 

// To traverse the struct linked list I just need to
// track the first and last node in the list

struct product *pFirstNode = NULL;
struct product *pLastNode = NULL;

void createNewList(){

	// Set aside enough space in memory for this struct

	struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));
		
	// We can assign the value directly for the structs 
	// reference for the next struct in the linked list
		
	pNewStruct->next = NULL;
	
	printf("Enter Product Name: ");
	
	// The & is needed only because scanf() is used
	
	scanf("%s", &(pNewStruct)->productName);
	
	printf("Enter Product Price: ");
		
	scanf("%f", &(pNewStruct)->price);
	
	// When the first struct is created all of the following
	// refer to the same struct
	
	pFirstNode = pLastNode = pNewStruct;

}

void inputData(){

	if(pFirstNode == NULL){
	
		createNewList();
	
	} else {
	
		// Set aside enough space in memory for this struct
	
		struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));
	
		printf("Enter Product Name: ");
	
		// The & is needed only because scanf() is used
	
		scanf("%s", &(pNewStruct)->productName);
	
		printf("Enter Product Price: ");
		
		scanf("%f", &(pNewStruct)->price);
	
		// If the first and last struct are equal we know this
		// is the second struct in the list
	
		if(pFirstNode == pLastNode){
		
			// Assign the value of next for the first struct to
			// this new one since the new one is the second struct
		
			pFirstNode->next = pNewStruct;
			
			// Since this is the second struct we know the last 
			// struct is equal to this new one
			
			pLastNode = pNewStruct;
			
			// Since this is the last struct in the list it has
			// NULL stored in its next
			
			pNewStruct->next = NULL;
		
		} else {
		
			// We know that this is at least the third struct in the
			// list so we don't need to touch the pFirstNode.
			// We instead just change the pLastNode value for next
			// from NULL to our new struct 
		
			pLastNode->next = pNewStruct;
			
			pNewStruct->next = NULL;
			
			pLastNode = pNewStruct;
		
		}
	
	}

}

void outputData(){

	// This temporarily takes the location of the structs in the 
	// linked list as we cycle through them to the end

	struct product *pProducts = pFirstNode;

	printf("Products Entered\n\n");
	
	// Until the ptr reaches a value of NULL for next we'll
	// keep printing out values
	
	while(pProducts != NULL){
	
		printf("%s costs %.2f\n\n", pProducts->productName, pProducts->price);
		
		// Switch to the next struct in the list
		
		pProducts = pProducts->next;
	
	}

}

int main(){

	inputData();
	
	inputData();
	
	outputData();

        return 0;
}
