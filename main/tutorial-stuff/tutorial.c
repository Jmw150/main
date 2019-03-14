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

// PART 2 ---------------------------

// NEW : Added For removeProduct
struct product *pProductBeforeProductToDelete = NULL;

// Searches for a struct of a given name and returns it if found

struct product* searchForProduct(char * productName){

	// Will hold the current struct as we cycle through them

	struct product *pProductIterator = pFirstNode;
	
	// Cycle through the structs in the list until next returns
	// NULL which means we reached the end of the list
	
	while(pProductIterator != NULL){
	
		// Compare the first 30 characters of the 2 product names
	
		int areTheyEqual = strncmp(pProductIterator->productName, 
			productName, 30);
			
		// If strings are equal areTheyEqual will have a value
		// of 0, so not is used to make 0 into 1 in that situation
			
		if(!areTheyEqual){
		
			printf("%s was found and it costs %.2f\n\n",
				pProductIterator->productName, 
				pProductIterator->price);
				
			// Return the product struct if found	
			
			return pProductIterator;
		
		}
		
		// NEW : Added For removeProduct
		pProductBeforeProductToDelete = pProductIterator;
		
		// Cycle to the next product struct in the list
		
		pProductIterator = pProductIterator->next;
	
	}
	
	printf("%s wasn't found\n\n", productName);
	
	return NULL;

}

// PART 3 ---------------------------

void removeProduct(char * productName){

    struct product *pProductToDelete = NULL;
    
    pProductToDelete = searchForProduct(productName);
    
    if(pProductToDelete != NULL){
    
    	printf("%s Was Deleted\n\n", productName);
    	
    	// If we want to delete the first product we
    	// must assign the next product in the list
    	// to the firstNode
    	
    	if(pProductToDelete == pFirstNode){
    	
    		pFirstNode = pProductToDelete->next;
    	
    	} else {
    	
    		// Get the product to delete and assign its next
    		// to the product before the product that is deleted
    	
    		pProductBeforeProductToDelete->next = pProductToDelete->next;
    		
    	}
    
    	free(pProductToDelete);
    
    } else {
    
    	printf("%s Was Not Found\n\n", productName);
    
    }

}

int main(){

	inputData();
	
	inputData();
	
	outputData();
	
	// PART 2
	
	searchForProduct("Tomato");
	
	// PART 3
	
	removeProduct("Egg");
	
	removeProduct("Tomato");
	
	outputData();
	
	/*
	free(pFirstNode);
	
	free(pLastNode);
	*/

}
#include <stdio.h>
#include <stdlib.h>

// C provides numerous methods for working with files
// A file is just a block of memory with a name
// The file can be stored across many blocks in memory, 
// but the C compiler acts as if it is in sequence.

// In this tutorial I will cover how to work with files
// if we represent them as text files. next time I'll cover how
// to use Binary File I/O

/*
int main(){

	int randomNumber;
	
	// Will store the pointer to the file
	
	FILE *pFile;
	
	// Opens a text file so we can write data to it.
	// It returns a pointer to the file
	// w - If a file doesn't exist create it. If it does overwrite it
	// a - Open or create text file and append to original content
	// r - Open a file to read from it
	// r+ - Open for reading and writing
	// w+ - Open or create, delete original and read and write
	// a+ - Open or create, append for writing and reading
	
	pFile = fopen("randomnumbers.txt", "w");
	
	// If the file wasn't opened a 1 is returned from fopen()
	
	if(!pFile){
	
		printf("Error : Couldn't Write to File\n");
		
		return 1;
	
	}
	
	// Print 10 random numbers to the file
	
	for(int i = 0; i < 10; i++){
	
		randomNumber = rand() % 100;
		
		// fprintf() prints to the file supplied just like
		// printf() prints to the screen
		
		fprintf(pFile, "%d\n", randomNumber);
	
	}
	
	printf("Success Writing to File\n");
	
	// Closes the text file
	// This must be done or eventually the program will run 
	// out of file handlers or memory
	

	if(fclose(pFile) != 0)
		printf("Error : File Not Closed\n");

	return 0;
}
*/

int main(){

	// Defining that we only expect there to be a maximum of 1,000
	// characters per lines read.

	char buffer[1000];
	
	FILE *pFile;
	
	// Opens the file for reading
	
	pFile = fopen("randomnumbers.txt", "r");
	
	// fopen returns 1 if an error occurred 
	
	if(!pFile){
	
		printf("Error : Couldn't Read the File\n");
		
		return 1;
	
	}
	
	// fgets() reads up to 1,000 characters per line until
	// fgets() returns the value of NULL when it reaches 
	// the end of the file.
	
	// while(fgets(buffer, 1000, pFile) != NULL){
	
	//	printf("%s", buffer);
	
	// }
	
	
	// You can also read from a file using fscanf
	// You pass the file, data type to read and the buffer
	// to store it in. You can check for valid data because 
	// fscanf() returns a number other then 1 if it isn't 
	// a string
	
	
	while(fscanf(pFile, "%s", buffer) == 1){
	
		// Puts outputs the string plus a newline.
		// Returns a nonnegative integer if it was successful
		// and EOF if there was an error
	
		puts(buffer);
	
	}
	
	
	printf("Success Reading from File\n");
	
	// Closes the text file
	
	if(fclose(pFile) != 0)
		printf("Error : File Not Closed\n");

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void){

	FILE *pFile;
	
	// Holds the data retrieved from the file
	
	char * buffer;
	
	// size_t is a data type used to represent the size
	// of an element in bytes. 10 chars would be equal
	// to a size of 11 for example.
	
	size_t dataInFile;
	
	// Will hold the size of the file
	
	long fileSize;

	// Opens the file using binary mode

	pFile = fopen("names.bin", "rb+");
	
	// If the file doesn't exist we will produce errors
	// and then try to create the file
	
	if(pFile == NULL){
	
		// Prints the string provided followed by the 
		// standard error message and assign an error
		// code to the variable errno
	
		perror("Error Occurred");
		printf("Error Code: %d\n", errno);
		
		printf("File Being Created\n\n");
		
		// Create the file
		
		pFile = fopen("names.bin", "wb+");
		
		if(pFile == NULL){
		
			perror("Error Occurred");
			printf("Error Code: %d\n", errno);
			exit(1);
		
		}
	
	}

	char name[] = "Derek Banas";

	// fwrite() writes binary data to a file
	// You pass a pointer to what to write to the file. 
	// Then the size of each element in the array for example,
	// or if you are righting a struct sizeof(theStruct).
	// The 3rd is the number of elements to write of the type
	// specified. Finally list the file pointer

	fwrite(name, sizeof(name[0]), sizeof(name)/sizeof(name[0]), pFile);
	
	// Go to the end of the file with fseek(), so I can use
	// ftell() to get the file size
	
	fseek (pFile , 0 , SEEK_END);
    fileSize = ftell(pFile);
    
    // Set pointer back to the beginning of the file
    
    rewind(pFile);
    
    // Set aside enough space in memory to hold the file
    
    buffer = (char*) malloc (sizeof(char)*fileSize);
    
    if(buffer == NULL){
    
    	perror("Error Occurred");
		printf("Error Code: %d\n", errno);
    	exit(2);
    
    }
    
    // fread() reads data from the file provided into the 
    // buffer provided. The 2nd attribute is the number
    // of bytes taken up by each element read. The 3rd
    // attribute is the number of elements to read.
    
    // fread() returns a size_t equal to the amount of
    // bytes stored in the file.
    
    dataInFile = fread(buffer, 1, fileSize, pFile);
    
    if(dataInFile != fileSize){
    
    	perror("Error Occurred");
		printf("Error Code: %d\n", errno);
    	exit(3);
    
    }
	
	printf("%s\n", buffer);
	
	printf("\n");
	
	// Closes the file associated with the stream
	
	fclose(pFile);
	
	// Deallocates the memory block created for the buffer
	
	free(buffer);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// With C we can actually work with individual bits.
// This is very useful if you want to work with hardware.

// What we use for counting is known as base 10.
// Base 10 numbers are calculated by multiplying each 
// successive number by an increasing multiple of ten.
// 2 = 2 * 10^0
// 45 = ( 4 * 10^1 ) + ( 5 * 10^0 )

// It is believed we use base 10 because we have 10 fingers.
// To understand computers you must learn to understand the world
// of a machine that has only 2 fingers.

// 1 = 1 * 2^0 = 1
// 10 = ( 1 * 2^1  ) + ( 0 * 2^0  ) = 2
// 111 = ( 1 * 2^2  )   +  ( 1 * 2^1  )   +  ( 1 * 2^0  ) = 7

// Bytes are normally represented as 8 bits which can hold a
// maximum value of 255 because of how binary numbers work. 

// Octal is a base 8 system. It includes numbers from 0 to 7
// They are often used because each octal digit represents 3 
// binary digits. 

// Hexadecimal is a base 16 system. It includes numbers 0 through
// 9 and the letters A through F. In C they can be represented with
// either lowercase or uppercase letters. Hex numbers are used because
// 2 digits can represent a byte.

char * convertBase(unsigned int numberToConvert, int base)
{

	// Buffer that will hold 32 bits + a \0 at the end

	char buffer[33];
	char *pConvertedNumber;
	
	// NEW : All the potential numbers and letters in the converted
	// number
	
	char allValues[] = "0123456789abcdef";

	if(base < 2 || base > 16){
		printf("Enter a Number Between 2 and 16\n");
		exit(1);
	}
	
	// Point to the last index in the character array

	pConvertedNumber = &buffer[sizeof(buffer)-1];
	
	// Put \0 in that last index in the char array
	
	*pConvertedNumber = '\0';

	do {
	
		// Get the right index from allValues[] 0 through f
	
		int value = numberToConvert % base;
		
		// Decrement the pointer to the next index to the 
		// left in the char array
		
		pConvertedNumber = pConvertedNumber - 1;
	
		// Store the proper value in the char array for the
		// final converted number 
		
		// *pConvertedNumber = '0' + value;
		
		*pConvertedNumber = allValues[value];
		
		// Divide by the base to check for the next number
		
		numberToConvert /= base;
		
	} while(numberToConvert != 0);
	
	printf("%s", pConvertedNumber);

	return pConvertedNumber;
}

int main(void){

	unsigned int numberOne = 60; // 111100
	
	printf("%d in Base 2 = ", numberOne);
	convertBase(numberOne, 2);
	
	printf("\n%d in Base 8 = ", numberOne);
	convertBase(numberOne, 8);
	
	printf("\n%d in Base 16 = ", numberOne);
	convertBase(numberOne, 16);
	
	printf("\n");
	
	
	return 0;
	
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convertBase(unsigned int numberToConvert, int base, 
	char *pConvertedNumber)
{
	
	// All the potential numbers and letters in the converted number
	
	char allValues[] = "0123456789abcdef";

	if(base < 2 || base > 16){
		printf("Enter a Number Between 2 and 16\n");
		exit(1);
	}
	
	// Point to the last index in the character array
	// Put \0 in that last index in the char array
	
	pConvertedNumber[32] = '\0';

	do {
	
		// Get the right index from allValues[] 0 through f
	
		int index = numberToConvert % base;
		
		// Decrement the pointer to the next index to the 
		// left in the char array
		
		pConvertedNumber = pConvertedNumber - 1;
	
		// Store the proper value in the char array for the
		// final converted number 
		
		*pConvertedNumber = '0' + index;
		
		// NEW *pConvertedNumber = allValues[index];
		
		// Divide by the base to check for the next number
		
		numberToConvert /= base;
		
	} while(numberToConvert != 0);
	
	return pConvertedNumber;

}

int main(void){

	unsigned int numberSix = 6; // 110
	unsigned int numberSeven = 7; // 111
	unsigned int andSolution;
	
	// Buffer that will hold 32 bits + a \0 at the end
	char *pConvertedNumber;
	pConvertedNumber = malloc(33 * sizeof(char));
	
	printf("%s\n", convertBase(numberSix, 2, pConvertedNumber));

	printf("%s\n", convertBase(10, 2, pConvertedNumber));
	
	// Now I'll explore C's Bitwise Operators
	
	// AND : If both are 1 & returns a 1 ------------
	// 110 & 111 = 110
	
	andSolution = numberSix & numberSeven;
	
	printf("%s & ", convertBase(numberSix, 2, pConvertedNumber));
	printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
	printf("%s\n\n", convertBase(andSolution, 2, pConvertedNumber));
	
	// OR : If either are 1 | returns a 1 ------------
	// 010 & 111 = 111
	
	unsigned int orSolution = numberSix | numberSeven;
	
	printf("%s | ", convertBase(numberSix, 2, pConvertedNumber));
	printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
	printf("%s\n\n", convertBase(orSolution, 2, pConvertedNumber));
	
	// EXCLUSIVE OR : 1 is returned only if one is 1 and the other 0
	// 010 & 111 = 101
	
	unsigned int exOrSolution = numberSix ^ numberSeven;
	
	printf("%s ^ ", convertBase(numberSix, 2, pConvertedNumber));
	printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
	printf("%s\n\n", convertBase(exOrSolution, 2, pConvertedNumber));
	
	// SIGNED INTEGERS --------------------
	
	// Signed integers can make things more complicated. A computer
	// could use the highest order bit to represent the sign.
	// So, 10000010 = -2 ( This isn't done though )
	// This means the largest number is 127 and the smallest is -127
	// 127 = 64 + 32 + 16 + 8 + 4 + 2 + 1

	// Computers represent signed numbers using something called 
	// Two's Complement. To get -2 using TC you take 2 (00000010) 
	// and invert the numbers to (11111101) and then add 1 
	// or (11111110) = -2 

	// To convert -2 back to 2 you invert the numbers for -2 and add 1
	// You know if a binary number is negative if the first digit is negative
	
	// ONES COMPLEMENT OPERATOR: Flips all the bits
	// 010 & 111 = 101
	
	unsigned int onesCompSolution = ~numberSix;
	
	printf("~%s = ", convertBase(numberSix, 2, pConvertedNumber));
	printf("%s\n\n", convertBase(onesCompSolution, 2, pConvertedNumber));
	
	printf("Negative of %d = %d\n\n", numberSix, (onesCompSolution + 1));
	
	// SHIFT OPERATORS ----------------------
	
	// BINARY LEFT SHIFT OPERATOR: Shifts the bits to the left 
	// 111 << 2 = 11100
	
	unsigned int shiftLeftTwo = numberSix << 2;
	
	printf("%s << 2 = ", convertBase(numberSix, 2, pConvertedNumber));
	printf("%s = %d\n\n", convertBase(shiftLeftTwo, 2, pConvertedNumber),
		shiftLeftTwo);
	
	// BINARY RIGHT SHIFT OPERATOR: Shifts the bits to the right 
	// 111 >> 2 = 1
	
	unsigned int shiftRightTwo = numberSix >> 2;
	
	printf("%s >> 2 = ", convertBase(numberSix, 2, pConvertedNumber));
	printf("%s = %d\n\n", convertBase(shiftRightTwo, 2, pConvertedNumber),
		shiftRightTwo);
		
	// BIT MASKING --------------------------- (FRAME 57)
	
	// Bit Masking is used to select part of a series of bits.
	// You can get a few bits by using the AND operator with 
	// 1s in the positions you are interested in and 0s otherwise.
	
	unsigned int analyzeMyBits = 170; // 10101010
	
	unsigned int theMask = 15; // 00001111
	
	unsigned int last4Bits = analyzeMyBits & theMask;
	
	// 		10101010
	// AND	00001111
	// 		00001010 = 10
	
	printf("Last 4 Bits : %s\n", convertBase(last4Bits, 2, pConvertedNumber));
	
	
	// To represent fractions in binary we do this:
	// .625 * 2 = 1.25 ( Take the first digit 1 and save it )
	// Move the .25 here and .25 * 2 = 0.50 ( Take the first digit 0 
	// and save it )
	// .50 * 2 = 1.0 ( Take the first digit 1 and save it )
	// When the fraction becomes 0 we are done and .625 is represented
	// in binary as .101

	// What happens with infinite fractions?
	// .1 * 2 = 0.2 (Binary .0)
	// .2 * 2 = 0.4 (Binary .00)
	// .4 * 2 = 0.8 (Binary .000)
	// .8 * 2 = 1.6 (Binary .0001)... This goes on forever, but the computer
	// will only store so many
	
	free(pConvertedNumber);
	return 0;

}
#include <stdio.h>

void main(){

	// Use gcc ProgramName.c -o ProgramName to define the name
	// for your program instead of using a.out
	// Execute with ./ProgramName

	// There are many ways to compare data in c
	// >, <, ==, >=, <=, !=
	// Only compare values with the same data type
	// To compare 2 unlike types perform a cast
	// A relational operator always evaluates to 1 for true, or 0 for false
	
	printf("\n");
	
	int num1 = 1, num2 = 2;
	
	printf("Is 1 > 2 : %d\n\n",num1 > num2);
	
	// If is used to compare values and perform different actions 
	// depending on those comparisons.
	// You can check multiple conditions with else if and
	// you can define a default with else
	// Once one condition is true the code in between the curly
	// brackets that follows is executed and then no other 
	// condition that follows is checked.
	
	if(num1 > num2){
	
		printf("%d is greater then %d\n\n", num1, num2);
	
	} else if(num1 < num2){
	
		printf("%d is less then %d\n\n", num1, num2);
	
	} else {
	
		printf("%d is equal to %d\n\n", num1, num2);
	
	}
	
	// Logical operators are used to combine the above relational 
	// operators. && - And, || - Or, ! - Not
	
	// Computers are Logical they only understand 1s and 0s
	// Relational operators check how values relate
	
	int custAge = 38;
	
	if(custAge > 21 && custAge < 35) printf("They are welcome\n\n");
	else printf("They are not welcome\n\n");
	
	// ! - Not turns a 1 to 0 and vice versa
	// Surround relations with parentheses when using not
	// This won't work !custAge > 21
	
	printf("! turns a true into false : %d\n\n", !1);
	
	// Bob deserves a raise if he has missed less then 10 days work
	// and has over 30000 in sales or has signed up 30 new customers
	
	int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;
	
	if(bobMissedDays < 10 && bobTotalSales > 30000 || bobNewCust > 30){
	
		printf("Bob gets a raise\n\n");
	
	} else {
	
		printf("Bob doesn't get a raise\n\n");
	
	}
	
	// The Conditional Operator is great for replacing simple if statements
	// (comparison) ? happensIfTrue : happensIfFalse;
	// Don't worry about char* for now
	
	char* legalAge = (custAge > 21) ? "true" : "false";
	
	printf("Is the customer of legal age? %s\n\n", legalAge);
	
	// You can change printf with a conditional operator directly
	
	int numOfProducts = 10;
	
	printf("I bought %s products\n\n", 
		(numOfProducts > 1) ? "many" : "one");
		
	// How much space are data types taking up?
	
	printf("A char takes up %d bytes\n\n", sizeof(char));
	
	printf("An int takes up %d bytes\n\n", sizeof(int));
	
	printf("A long int takes up %d bytes\n\n", sizeof(long int));
	
	printf("A float takes up %d bytes\n\n", sizeof(float));
	
	printf("A double takes up %d bytes\n\n", sizeof(double));
	
	// What is a byte, bit, etc?
	// A Bit is short for Binary Digit and can be either a 1 or 0
	// A Byte is generally considered to be 8 Bits
	
	int bigInt = 2147483648;
	
	printf("I'm bigger then you may have heard %d\n\n", bigInt);
	
	// Calculate the maximum value based on bits
	
	int numberHowBig = 0;
	
	printf("How Many Bits? ");
	
	scanf(" %d", &numberHowBig);
	
	printf("\n\n");
	
	// 0 : Print what was given
	// 1 : Print what was given
	// 2 : 1 + 2 = 3 (Binary : 11)
	// 3 : 3 + 4 = 7 (Binary : 111)
	// 4 : 7 + 8 = 15 (Binary : 1111)
	
	// Initialize the incrementor before the while loop
	
	int myIncrementor = 1, myMultiplier = 1, finalValue = 1;
	
	while(myIncrementor < numberHowBig){
	
		myMultiplier *= 2;
		
		finalValue = finalValue + myMultiplier;
		
		// Test to track and make sure I'm right
		
		printf("finalValue: %d myMultiplier: %d myIncrementor: %d\n\n",
			finalValue, myMultiplier, myIncrementor);
		
		// Don't forget to increment so the while loop ends
		// when the condition becomes false (Infinite Loop Otherwise)
		
		myIncrementor++;
	
	}
	
	// Handle if user enters 0 or 1
	
	if ((numberHowBig == 0) || (numberHowBig == 1)){
	
		printf("Top Value: %d\n\n", numberHowBig);
		
	} else {
	
		printf("Top Value: %d\n\n", finalValue);
		
	}
	
	int secretNumber = 10, numberGuessed = 0;
	
	// Infinite while loop
	
	while(1){
	
		printf("Guess My Secret Number: ");
		scanf(" %d", &numberGuessed);
		
		if(numberGuessed == 10){
		
			printf("You Got It");
			
			// break is used to throw you the the first 
			// line of code after the loop
			
			break;
		
		}
	
	}
	
	printf("\n\n");
	
	// You use a Do While Loop when you need something done 
	// at least once, but don't know the number of times you 
	// may need to loop
	
	char sizeOfShirt;
	
	do {
	
		printf("What Size of Shirt (S,M,L): ");
	
		scanf(" %c", &sizeOfShirt);
	
	} while(sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');
	
	// When you know up front exactly how many times you
	// need to loop then use a for loop
	// for(define incrementor; define condition; increment incrementor)
	
	for(int counter = 0; counter <= 20; counter++){
	
		printf("%d ", counter);
	
	}
	
	// If you use the above code make sure you compile with
	// gcc -std=c99 CTutorial2.c -o CTutorial2
	// Previous to C99 you had to initialize outside of the for 
	// loop instead of using int counter = 0;
	// To use C99 though main must have a return type
	
	printf("\n\n");
	
	// Print only odd numbers
	
	for(int counter = 0; counter <= 40; counter++){
	
		// continue is used to skip this iteration of the loop
		// and instead continue with the next loop cycle
	
		if((counter % 2) == 0) continue;
	
		printf("%d ", counter);
	
	}
	

}
#include <stdio.h>

// Needed for exit()
#include <stdlib.h> 

void main(){

	int whatToDo = 0;

	do{
	printf("\n");
	printf("1. What Time is It?\n");
	printf("2. What is Todays Date?\n");
	printf("3. What Day is It?\n");
	printf("4. Quit\n");
	
	scanf(" %d", &whatToDo);
	} while(whatToDo < 1 || whatToDo > 4);
	
	// How to handle the input with if
	
	if(whatToDo == 1){
	
		printf("Print the time\n");
	
	} else if(whatToDo == 2){
	
		printf("Print the date\n");
	
	} else if(whatToDo == 3){
	
		printf("Print the day\n");
	
	} else {
	
		printf("Bye Bye\n");
		
		// Exit the program with a non error state
		// Almost always better to use return
		
		exit(0);
	
	}
	
	printf("\n");
	
	// How to handle the input with switch
	// Switch checks the value provided and executes
	// accordingly. (Value must be char or int)
	// break is used to stop checking input against the
	// other options. Without break other options would 
	// be checked
	
	switch(whatToDo){
	
		case(1) : printf("Print the time\n");
					break;
					
		case(2) : printf("Print the date\n");
					break;
					
		case(3) : printf("Print the day\n");
					break;
					
		default : printf("Bye Bye\n");
					exit(0);
					break;
	
	}
	
}
#include <stdio.h>

void main(){

	// When you compile and run your program you are provided
	// with a piece of memory in ram to store data like
	// variables.

	int rand1 = 12, rand2 = 15;
	
	// Each time you create an int 4 bytes of data are saved 
	// and that part of memory has an address you can use
	// to locate the data.
	
	// You can return that address by placing a & before 
	// the variable name in c.
	
	printf("rand1 = %p : rand2 = %p\n\n", &rand1, &rand2);
	
	// Sometimes these variables are stored next to each other 
	// and at other times that isn't true
	
	printf("Size of int %d\n\n", sizeof(int));
	
	// To assign the address to another variable proceed it with
	// an asterisk * 
	
	int * pRand1 = &rand1;
	
	// If we use %p we get the hexadecimal version of the address
	
	printf("Pointer %p\n\n", pRand1);	
	
	// If we use %d we get the decimal version of the address
	
	printf("Value %d\n\n", pRand1);
	
	// We have to use the * to get the value stored there
	// This is known as dereferencing the pointer
	// Dereferencing means to use the pointer to access the variable
	
	printf("Value %d\n\n", *pRand1);
	
	// ARRAYS AND POINTERS
	
	// An array name is pretty much a pointer
	
	int primeNumbers[] = {2,3,5,7};
	
	// We can print the values by index
	
	printf("First index : %d\n\n", 
		primeNumbers[0]);
		
	// You can print the first value also with *
	
	printf("First index with * : %d\n\n", 
		*primeNumbers);
	
	// You can use pointer arithmetic to access the other values
	// with *
	// This is in essence adding 1 to the address and since
	// it contains ints it jumps 4 bytes forward
	// Yes you can use it to get other data stored in memory
	
	printf("Second index with * : %d\n\n", 
		*(primeNumbers + 1));
		
	// ARRAYS OF STRINGS
	
	// To create an array of strings, you have to create an
	// array of pointers
	
	char * students[4] = {"Sally", "Mark", "Paul", "Sue"};
	
	// You can retrieve them now like any other data in an array
	
	for(int i = 0; i < 4; i++){
	
		printf("%s : %d\n\n", students[i], &students[i]);
	
	}

}
// structs are used when you need more then one 
// piece of data to describe one thing.
// We can't use an array because areas only hold one
// type of data.

#include <stdio.h>

// This creates a dog struct with the data needed

struct dog {

	// Labeled with const because they won't change
	
	const char *name;
	const char *breed;
	int avgHeightCm;
	int avgWeightLbs;

};

void getDogInfo(struct dog theDog){

	printf("\n");

	// Since a struct is initialized like an array you
	// may think you access the data like this theDog[0],
	// but they don't work that way. You need to use the
	// dot operator like this.
	
	printf("Name: %s\n\n", theDog.name);
	printf("Breed: %s\n\n", theDog.breed);
	printf("Avg Height: %d cm\n\n", theDog.avgHeightCm);
	printf("Avg Weight: %d lbs\n\n", theDog.avgWeightLbs);

}

void getMemoryLocations(struct dog theDog){

	printf("Name Location: %d\n\n", theDog.name);
	printf("Breed Location: %d\n\n", theDog.breed);
	printf("Height Location: %d\n\n", &theDog.avgHeightCm);
	printf("Weight Location: %d\n\n", &theDog.avgWeightLbs);

}

void main(){

	// Define a new dog by passing the values specific 
	// to this dog.
	// struct is the data type and cujo is the variable name

	struct dog cujo = {"Cujo", "Saint Bernard", 90, 264};
	
	// Now we can pass all the dog info easily
	
	getDogInfo(cujo);
	
	// Keynote Presentation --------------------
	// A struct defines a template for your data type
	// A struct variable defines the memory needed to fit the data
	
	// What happens if a struct is copied to another?
	// They point to the same memory locations
	
	struct dog cujo2 = cujo;
	
	getMemoryLocations(cujo);
	
	getMemoryLocations(cujo2);
	
}
#include <stdio.h>

// In the last tutorial I talked about weight and height
// but there are many ways to weigh and measure.
// Weight: pounds, grams, kilograms, milligrams, ounces
// Measurement: centimeter, feet, inch, millimeter

// Let's say I sell oranges in different forms.
// Per Orange: $.45
// Per Pound: $1.14 
// Orange Juice (16oz): $2.43

// A union allows you store one piece of data that can
// be of a different type. You can't store multiple
// values though. 

// It wouldn't be normal if a customer asks to buy one 
// orange, for you to quote the price for just the juice.
// A union also doesn't store all 3 values, but instead
// only 1 of the 3.

void main(){
	
	typedef union{
	
		// Nobody is going to buy 255 oranges for $114.75 
		// individually when they can buy in pounds 
		// for $96.90. That is why a 2 byte short works
		// We are also not going to sell 1/2 an orange
	
		short individual; 
		float pound;
		float ounce;
	
	} amount;
	
	// The Designated Initializer is used to set a union field
	
	amount orangeAmt = {.ounce = 16};
	
	// You can also set the value with the dot operator
	
	orangeAmt.individual = 4;
	
	/*------------------------------
	A Union Only Holds 1 Value at a Time
	It may seem as if it can hold more, but that's a 
	coincidence because values are stored in the same
	block of data.
	------------------------------*/
	
	// This may or may not work because individual and not
	// ounce is the stored value now
	
	printf("Orange Juice Amount: %.2f : Size: %d\n\n",
		orangeAmt.ounce, 
		sizeof(orangeAmt.ounce));
		
	// If you put %f in instead of %d, you MAY get the ounces
		
	printf("Number of Oranges: %d : Size: %d\n\n",
		orangeAmt.individual, 
		sizeof(orangeAmt.individual));
		
	// Get the location in memory
		
	printf("Indiv Location: %d\n\n", &orangeAmt.individual);
		
	orangeAmt.pound = 1.5;
	
	printf("Pounds of Oranges: %.2f : Size: %d\n\n",
		orangeAmt.pound, 
		sizeof(orangeAmt.pound));
		
	// This location is the same as individual
		
	printf("Pound Location: %d\n\n", &orangeAmt.individual);
		
	// You can use Unions in Structs
	
	typedef struct{
	
		char *brand;
		amount theAmount;
	
	} orangeProduct;
	
	// You can initialize with a Designated Initializer 
	// here as well
	
	orangeProduct productOrdered = {"Chiquita",
		.theAmount.ounce = 16};
		
	// You print out with the dot operator
		
	printf("You bought %.2f ounces of %s oranges\n\n",
		productOrdered.theAmount.ounce, 
		productOrdered.brand);
		
	// Now back to the problem above where we get bad
	// data if the wrong conversion character. 
	// First we have to learn about enums though
	
	// An enum is used when you only will ever need
	// a limited number of possible values.
	
	typedef enum{ 
		INDIV, OUNCE, POUND } quantity;
		
	quantity quantityType = INDIV;
		
	orangeAmt.individual = 4;
		
	if(quantityType == INDIV){
	
		printf("You bought %d oranges\n\n",
			orangeAmt.individual);
	
	} else if(quantityType == OUNCE){
	
		printf("You bought %.2f ounces of oranges\n\n",
			orangeAmt.ounce);
	
	} else {
	
		printf("You bought %.2f pounds of oranges\n\n",
			orangeAmt.pound);
	
	}
		
}
#include <stdio.h>

// Needed if you want to use bool
#include <stdbool.h>

#include <string.h>

#include <ctype.h>

// Used to remove a newline

void noMoreNewline(char* theString){

	char * isANewline;

	// strchr() returns a pointer to the first location
	// of the character provided
	// strrchr() returns the last occurance
	
	isANewline = strrchr(theString, '\n');
	
	if(isANewline){
	
		*isANewline = '\0';
	
	}

}

// Used to make all letters lowercase

void makeLowercase(char* theString){

	int i = 0;

	while(theString[i]){
	
		// tolower() converts char to lowercase
		// toupper() does the opposite
	
		theString[i] = tolower(theString[i]);
		
		i++;
	
	}

}

void getCharInfo(){

	char theChar;

	while ((theChar = getchar()) != '\n'){
	
		printf("Letter or Number %d\n\n", isalnum(theChar));
		printf("Alphabetic Char %d\n\n", isalpha(theChar));
		printf("Standard Blank %d\n\n", isblank(theChar));
		printf("Ctrl Char %d\n\n", iscntrl(theChar));
		printf("Number Char %d\n\n", isdigit(theChar));
		printf("Anything But Space %d\n\n", isgraph(theChar));
		printf("Lowercase %d\n\n", islower(theChar));
		printf("Uppercase %d\n\n", isupper(theChar));
		printf("Anything not a Letter, Number or Space %d\n\n", ispunct(theChar));
		printf("Any Space %d\n\n", isspace(theChar));
	
	}

}

void main(){
	/* _Bool and bool data type ------
	// _Bool is the C boolean type. It holds either a 1 (true)
	// or a 0 (false)

	_Bool isANumber;
	
	// If #include <stdbool.h> is above you can use bool here
	// It defines true as a constant for 1 and false for 0
	
	int number;
	int sumOfNumbers;
	
	printf("Enter a number: ");
	
	// Checks if data matching the format specifier was entered
	// (0-9) with a + or minus. If true a 1 is returned
	
	isANumber = (scanf("%d", &number) == 1);
	
	// When they enter data that doesn't match the format specifier
	// %d the loop ends
	
	while(isANumber){
	
		sumOfNumbers = sumOfNumbers + number;
		
		printf("Enter another number: ");
	
		isANumber = (scanf("%d", &number) == 1);
	
	}
	
	printf("The Sum is %d\n\n", sumOfNumbers);
	
	*/
	
	/* Demonstrate getchar, putchar and buffering
	
	char theChar;
	
	// With this compiler getchar() will wait until the enter
	// button is pressed and then push everything to the screen.
	
	// The data is stored in a buffer as it is entered. The buffer
	// is a temporary storage area in memory. The size of the buffer
	// depends on the system. In essence a buffer is just a pointer 
	// without a specified size. This is an example of line
	// buffering because the buffer ends when a newline is entered.
	
	while ((theChar = getchar()) != '~'){
	
		putchar(theChar);
	
	}
	
	*/
	
	
	
	/* Demonstrate gets(), puts(), fgets(), fputs() 
	
	char name[50];
	
	printf("What is your name? ");
	
	// The gets() function recieves a string from the keyboard
	// until a \n is reached. It then replaces the \n with \0
	// Be careful with gets because it doesn't check if the input
	// fits in the 50 character space. That is why I have been
	// using fgets()
	
	gets(name);
	
	// puts() receives a string and prints it out followed by
	// a new line
	
	puts("Hi");
	puts(name);
	
	printf("What is your name? ");
	
	// fgets() reads till the array limit is reached or till \n
	// It appends a \n to the end of the array
	
	fgets(name, 50, stdin);
	
	// fputs() prints strings without a \n
	
	fputs("Hi ", stdout);
	fputs(name, stdout);
	
	*/
	
	/*
	// Demonstrate a confusing way to print strings
	
	// Create a string array (pointer to first element in array)
	
	char * randomString = "Just some random stuff";
	
	// while continues until it reaches a null character, which
	// with *randomString is equal to 0
	
	while(*randomString){
	
		// Prints a character in the array and then increments
		// to the next
	
		putchar(*randomString++);
	
	}
	
	puts("\n");
	
	*/
	
	// The above is the same as 
	/*
	
	char * randomString = "Just some random stuff";
	
	int i = 0;
	while(randomString[i] != '\0'){
		putchar(randomString[i++]);
	}
	
	*/
	
	/* Solving more random problems
	
	char doYouWantToQuit[10];
	
	printf("Enter quit to quit: ");
	
	fgets(doYouWantToQuit, 10, stdin);
	
	// fgets() adds a newline at the end. To get rid of it
	// Deletes the newline from the string
	
	noMoreNewline(doYouWantToQuit);
	
	// Make letters lowercase
	
	makeLowercase(doYouWantToQuit);
	
	// strcmp() returns 0 when the strings are equal
	
	while(strcmp(doYouWantToQuit, "quit")){
	
		printf("Enter quit to quit: ");
	
		fgets(doYouWantToQuit, 10, stdin);
		
		noMoreNewline(doYouWantToQuit);
		
		makeLowercase(doYouWantToQuit);
	
	}
	
	printf("Thank you for typing %s\n\n",doYouWantToQuit);
	
	*/
	
	// Testing ctype.h Functions
	
	getCharInfo();

}
#include <stdio.h>
#include <stdlib.h>

// When you define an int, float, or array, you define exactly how 
// much memory you need and that is all you can get at run time
// using traditional data types.

// If you need to allocate memory as a program runs you need 
// malloc()

// When malloc() is called you pass it the amount of memory required and
// it returns the address to that memory that you can refer to using 
// a pointer. If the space couldn't be found null is returned.


int main(){

	int amtOfNumbersToStore;

	printf("How many numbers do you want to store: ");
	
	scanf("%d", &amtOfNumbersToStore);
	
	// Create an int pointer and set aside enough space to hold the ints
	// required.
	// pRandomNumbers points to just the first element, but it can
	// access the others.
	// The typecast (int *) isn't required in C, but is in C++
	
	int * pRandomNumbers;
	pRandomNumbers = (int *) malloc(amtOfNumbersToStore * sizeof(int));
	
	// Check if memory was located by malloc
	
	if(pRandomNumbers != NULL){
	
		int i = 0;
		
		printf("Enter a Number or Quit: ");
	
		// Receives ints until the memory allocated is full, or
		// until a non int is entered
		
		// You store values by referring to the pointer using
		// array notation
	
		while(i < amtOfNumbersToStore && scanf("%d", 
			&pRandomNumbers[i]) == 1){
			
				printf("Enter a Number or Quit: ");
				
				i++;
			
		}
		
		printf("\nYou entered the following numbers\n");
		
		// 
		
		for(int j = 0; j < i; j++){
			
			printf("%d\n", pRandomNumbers[j]);
		
		}
	
	}
	
	// Make sure you give back the memory allocated by malloc
	// when you are finished with it.
	
	free(pRandomNumbers);
	
	// In this program free() isn't required because all allocated
	// memory is returned to the system when the program terminates.
	
	// free() would be required though if you were allocating large
	// blocks of memory over and over without returning it.
	
	// Let's say you store 10k of data using malloc, use it and have
	// no further use for it but don't use free.
	// Then you grab another 10k over and over. Eventually you'll
	// run out of memory and get a memory leak.

	return 0;
}
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
/* This is a multi-line comment
   Always comment as you write code*/

// Single line comment

// Provides you with printf() among other functions
// When the program is compiled the code between the brackets
// will be loaded here

#include <stdio.h> // For printf, scanf
#include <string.h> // For strcpy

// You define constants with define
// Tells the compiler to replace MYNAME with what is provided

#define MYNAME "Derek Banas"

// Every program must have a main function
// The main function is where the computer starts executing your code
// If you have any other functions that aren't called from main
// they will never execute

// This is a global variable that is available in every function
// in this program

int globalVar = 100;

main()
{
	// Variables are boxes in memory that save important data
	// A variable name must start with a letter, but then can
	// contain numbers, letters or underscores

	// A char can hold any of 256 single characters
	// All characters are surrounded by apostrophes '
	// If you save a number as a char it can't be used for calculating

	char firstLetter = 'D';

	// An int can contain any whole number positive or negative
	// Between -32,768 and 32,767

	int age = 38;
	
	// Use a long int if you need to use a number larger or smaller
	// then is provided by an int
	
	long int superBigNum = -32767000;

	// A float is a number with a decimal positive or negative

	float piValue = 3.14159265359;
	
	// A double is used when you need a number bigger then float
	
	double reallyBigPi = 3.1415926535897932384626433832795028841971;
	
	printf("\n");

	// Most all C function names contain no uppercase letters
	// printf() prints to screen the string inside of quotes
	// \n tells the screen to skip to the next line
	// Escape Sequences: \t - tab, \\ - backslash, \" - Quote

	printf("This will print to screen\n\n");

	// %d is a conversion character that inserts an int into your output

	printf("I am %d years old\n\n", age);
	
	// %ld is a conversion character for long ints
	
	printf("Big Number %ld\n\n", superBigNum);

	// %f is a conversion character for floats and doubles
	// You can define the number of decimal places as well
	// Size goes from -3.4 * 10^38 to 3.4 * 10^38

	printf("Pi = %.5f\n\n", piValue);
	
	// As you can see the computer representation of a float
	// is imprecise. If you need precision it is best to store
	// decimals as ints
	
	printf("Big Pi = %.20f\n\n", reallyBigPi);
	
	// %c is the conversion character for chars
	
	printf("The first letter of my name is %c\n\n", firstLetter);
	
	// %s is used for strings
	
	printf("My name is %s\n\n", "Derek");
	
	// To create a String you instead create char arrays
	// Every char array has a \0 String Terminator as the last 
	// character, so always make your char arrays at least 1
	// character longer then you need
	
	char myName[12] = "Derek Banas";
	
	// You could also do this char myName[] = "Derek Banas";
	
	printf("My name is %s\n\n", myName);
	
	// You can't assign a new value to a char array
	// You would use strcpy for that
	
	strcpy(myName, "Bob Smith");
	
	printf("My name is %s\n\n", myName);
	
	// scanf() is used to get input from the user
	// You must use the & ampersand before the
	// variable unless you're using %s
	
	char middleInitial;
	
	printf("What is your middle initial? ");
	
	scanf(" %c", &middleInitial);
	
	// You can only except more then one value if you
	// define exactly what you expect to get
	
	char firstName[30], lastName[30];
	
	printf("What is your name? ");
	
	scanf(" %s %s", firstName, lastName);
	
	printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);
	
	
	
	// You can also except a / if you know the user will enter it
	
	int month, day, year;
	
	printf("Whats your birth date? ");
	
	scanf(" %d/%d/%d", &month, &day, &year);
	
	printf("Birth Date %d/%d/%d\n\n", month, day, year);
	
	// C Programming Math
	// +, -, *, /, and sometimes % (% only with ints)
	
	int num1 = 12, num2 = 15, numAns;
	
	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;
	
	printf("Integer Calculation %d\n\n", num2 / num1);
	
	printf("Float Calculation %f\n\n", decimal2 / decimal1);
	
	printf("Modulus %d\n\n", num2 % num1);
	
	// Use parentheses when needed
	// Order of Operations
	// Parentheses
	// - Negative Sign, ! Not, ++ Increment, -- Decrement
	// * Multiplication, / Division, % Modulus
	// + Addition, - Subtraction
	// Relational Operators : <, >, <=, >=
	
	printf("Without Parentheses %d\n\n", 3 + 6 * 10);
	
	printf("With Parentheses %d\n\n", (3 + 6) * 10);
	
	int randomNum = 1;
	
	// There are shortcut ways to perform calculations
	// +=, -=, *=, /=, %=, ++, --
	
	printf("1 += 2 : %d\n\n", randomNum, randomNum += 2);
	
	// We didn't do it this way because the addition takes
	// place first 
	
	printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);
	
	// ++ and -- work differently depending on where they are
	
	int exNum = 1;
	
	printf("++%d : %d\n\n", exNum, ++exNum);
	
	exNum = 1;
	
	printf("%d++ : %d\n\n", exNum, exNum++);
	
	// If you ever need to cast one data type to another
	// just put (dataType) before it to cast
	
	int numberEx = 12;
	
	float numberEx2 = 1.234;
	
	int numberEx3 = numberEx / numberEx2;
	
	printf("numberEx / numberEx2 : %f\n\n", (float) numberEx3);

	return 0;
}


