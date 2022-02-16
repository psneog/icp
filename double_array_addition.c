/********************************************
Program to add two 2d array
*********************************************/

# include <stdio.h>

# define MAX_ROW 3
# define MAX_COL 4

void main() {
	
	int i;	// row index
	int j; 	// column index
	int array1[MAX_ROW][MAX_COL];
	int array2[MAX_ROW+1][MAX_COL+1];  
	int array3[MAX_ROW+2][MAX_COL+2]; 
	
	// Read array1
	printf("Please input array1:\n");
	for(i=0; i < MAX_ROW; i++)
		for(j=0; j < MAX_COL; j++)
			scanf("%d", &array1[i][j]);
			
	// Display array1
	printf("You entered:\n");
	for(i=0; i < MAX_ROW; i++) {
		for(j=0; j < MAX_COL; j++)
			printf("%d ", array1[i][j]);
	    printf("\n");
	}

    // Read array2
	printf("Please input array2:\n");
	for(i=0; i < MAX_ROW+1; i++)
		for(j=0; j < MAX_COL+1; j++)
			scanf("%d", &array2[i][j]);
			
	// Display array2
	printf("You entered:\n");
	for(i=0; i < MAX_ROW+1; i++) {
		for(j=0; j < MAX_COL+1; j++)
			printf("%d ", array2[i][j]);
	    printf("\n");
	}
	
	//add them
	for(i=0; i < MAX_ROW+3; i++)
		for(j=0; j < MAX_COL+3; j++)
			array3[i][j] = array1[i][j] + array2[i][j];

	// Display array3
	printf("The summed array is:\n");
	for(i=0; i < MAX_ROW+3; i++) {
		for(j=0; j < MAX_COL+3; j++)
			printf("%d ", array3[i][j]);
	    printf("\n");
	}	
	
	printf("Bye\n");
	return;
}
