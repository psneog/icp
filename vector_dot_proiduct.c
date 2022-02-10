/********************************************
Program to calculate vector dot product
using 1 D vector
*********************************************/

# include <stdio.h>
# define MAX_DIM 5

void main() {
	
	int vector1[MAX_DIM];
	int vector2[MAX_DIM];
	int intermediate_prod[MAX_DIM];	// contains the product
						// of individual elements
	int prod = 0;	// scalar product
	int i;
	
	// read the vector
	printf("Please enter first vector:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    scanf("%d", &vector1[i]);
        
    printf("Please enter second vector:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    scanf("%d", &vector2[i]);

    // calculate intetrmediate product
	for ( i = 0; i < MAX_DIM; i++) 
	    intermediate_prod[i] = vector1[i] * vector2[i];
	   
	// add the elements of the 
	// intermediate product
	for ( i = 0; i < MAX_DIM; i++) 
	    prod += intermediate_prod[i]; 
	    
	    
	/*************************************
	//  If you want the product in one go
	for ( i = 0; i < MAX_DIM; i++) 
	    prod += vector1[i] * vector2[i];
	*************************************/
	    
	// display the vectors
	printf("vector 1:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    printf("%d ", vector1[i]);
	printf("\n");
	
	// display the vectors
	printf("vector 2:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    printf("%d ", vector2[i]);
	printf("\n");
	
	// display the vectors
	printf("Intermediate product:\n");
	for ( i = 0; i < MAX_DIM; i++) 
	    printf("%d ", intermediate_prod[i]);
	printf("\n");

        printf("Finally, the dot/scalar product = %d\n", prod);	
	
	return;
}
