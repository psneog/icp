/********************************************
Program to add two 1 D array
*********************************************/

# include <stdio.h>
# define MAX_DIM 5

void main() {
	
	int array1[MAX_DIM];
	int array2[MAX_DIM];
	int result[MAX_DIM];
	int i;
	
	// read the array
	printf("Please enter first array:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    scanf("%d", &array1[i]);
        
        printf("Please enter second array:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    scanf("%d", &array2[i]);

        // add the arrays 
        printf("Please enter first array:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    result[i] = array1[i] + array2[i];
	
	// display the arrays
	printf("Array 1:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    printf("%d ", array1[i]);
	printf("\n");
	
	// display the arrays
	printf("Array 2:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    printf("%d ", array2[i]);
	printf("\n");
	
	// display the arrays
	printf("Sum:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    printf("%d ", result[i]);
	printf("\n");
	
	
	return;
}
