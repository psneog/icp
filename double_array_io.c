/********************************************
Program to i/o 2d array
*********************************************/

# include <stdio.h>

# define MAX_ROW 3
# define MAX_COL 4

void main() {
	
	int i;	// row index
	int j; 	// column index
	int array[MAX_ROW][MAX_COL]; 
	
	// Read the array
	printf("Please input the array:\n");
	for(i=0; i < MAX_ROW; i++)
		for(j=0; j < MAX_COL; j++)
			scanf("%d", &array[i][j]);
			
	// Display the array
	printf("You entered:\n");
	for(i=0; i < MAX_ROW; i++) {
		for(j=0; j < MAX_COL; j++)
			printf("%d ", array[i][j]);
	    printf("\n");
	}
	
	printf("Bye\n");
	return;
}
