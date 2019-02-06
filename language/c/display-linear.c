// Display a finite linear combination in an infinite vector basis

//Accepts vector coefficients from the command line, prints usage syntax if invoked with no arguments. This implementation can handle floating point values but displays integer values as integers. All test case results shown with invocation. A multiplication sign is not shown between a coefficient and the unit vector when a vector is written out by hand ( i.e. human readable) and is thus not shown here as well.

#include<stdlib.h>
#include<stdio.h>
#include<math.h> /*Optional, but better if included as fabs, labs and abs functions are being used. */
 
int main(int argC, char* argV[])
{
 
	int i,zeroCount= 0,firstNonZero = -1;
	double* vector;
 
	if(argC == 1){
		printf("Usage : %s <Vector component coefficients seperated by single space>",argV[0]);
	}
 
	else{
 
		printf("Vector for [");
		for(i=1;i<argC;i++){
			printf("%s,",argV[i]);
		}
		printf("\b] -> ");
 
 
		vector = (double*)malloc((argC-1)*sizeof(double));
 
		for(i=1;i<=argC;i++){
			vector[i-1] = atof(argV[i]);
			if(vector[i-1]==0.0)
				zeroCount++;
			if(vector[i-1]!=0.0 && firstNonZero==-1)
				firstNonZero = i-1;
		}
 
		if(zeroCount == argC){
			printf("0");
		}
 
		else{
			for(i=0;i<argC;i++){
				if(i==firstNonZero && vector[i]==1)
					printf("e%d ",i+1);
				else if(i==firstNonZero && vector[i]==-1)
					printf("- e%d ",i+1);
				else if(i==firstNonZero && vector[i]<0 && fabs(vector[i])-abs(vector[i])>0.0)
					printf("- %lf e%d ",fabs(vector[i]),i+1);
				else if(i==firstNonZero && vector[i]<0 && fabs(vector[i])-abs(vector[i])==0.0)
					printf("- %ld e%d ",labs(vector[i]),i+1);
				else if(i==firstNonZero && vector[i]>0 && fabs(vector[i])-abs(vector[i])>0.0)
					printf("%lf e%d ",vector[i],i+1);
				else if(i==firstNonZero && vector[i]>0 && fabs(vector[i])-abs(vector[i])==0.0)
					printf("%ld e%d ",vector[i],i+1);
				else if(fabs(vector[i])==1.0 && i!=0)
					printf("%c e%d ",(vector[i]==-1)?'-':'+',i+1);
				else if(i!=0 && vector[i]!=0 && fabs(vector[i])-abs(vector[i])>0.0)
					printf("%c %lf e%d ",(vector[i]<0)?'-':'+',fabs(vector[i]),i+1);
				else if(i!=0 && vector[i]!=0 && fabs(vector[i])-abs(vector[i])==0.0)
					printf("%c %ld e%d ",(vector[i]<0)?'-':'+',labs(vector[i]),i+1);				
			}
		}
	}
 
	free(vector);
 
	return 0;
}

/*

C:\rossetaCode>vectorDisplay.exe 1 2 3
Vector for [1,2,3] -> e1 + 2 e2 + 3 e3
C:\rossetaCode>vectorDisplay.exe 0 0 0
Vector for [0,0,0] -> 0
C:\rossetaCode>vectorDisplay.exe 0 1 2 3
Vector for [0,1,2,3] -> e2 + 2 e3 + 3 e4
C:\rossetaCode>vectorDisplay.exe 1 0 3 4
Vector for [1,0,3,4] -> e1 + 3 e3 + 4 e4
C:\rossetaCode>vectorDisplay.exe 1 2 0
Vector for [1,2,0] -> e1 + 2 e2
C:\rossetaCode>vectorDisplay.exe 0 0 0
Vector for [0,0,0] -> 0
C:\rossetaCode>vectorDisplay.exe 0
Vector for [0] -> 0
C:\rossetaCode>vectorDisplay.exe 1 1 1
Vector for [1,1,1] -> e1 + e2 + e3
C:\rossetaCode>vectorDisplay.exe -1 -1 -1
Vector for [-1,-1,-1] -> - e1 - e2 - e3
C:\rossetaCode>vectorDisplay.exe -1 -2 0 -3
Vector for [-1,-2,0,-3] -> - e1 - 2 e2 - 3 e4
C:\rossetaCode>vectorDisplay.exe -1
Vector for [-1] -> - e1

*/
