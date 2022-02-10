/********************************************
Program to demonstrate i/o with a 1 D array
*********************************************/

# include <stdio.h>

void main() {
	
	int array1d[5];
	int i;
	
	// read the array
	printf("Please enter the array:\n");
	for ( i = 0; i < 5 /* max array element */; i++) 
	    scanf("%d", &array1d[i]);
	
	// display the array
	printf("The array you entered is:\n");
	for ( i = 0; i < 5 /* max array element */; i++) 
	    printf("%p --> %d \n", &array1d[i], array1d[i]);
	    
	printf("\nBye\n");
	return;
}
