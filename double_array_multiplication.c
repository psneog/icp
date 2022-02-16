/********************************************
Program to multiply two 2d array A (mxn) and 
B (nxp) to get a third array C (mxp)
*********************************************/

# include <stdio.h>

# define M 3
# define N 2
# define P 2

void main() {
	
	int i;	// index
	int j; 
	int k;	
	int a[M][N];
	int b[N][P];  
	int c[M][P]; 
	
	// Read a
	printf("Please input a:\n");
	for(i=0; i < M; i++)
		for(j=0; j < N; j++)
			scanf("%d", &a[i][j]);
			
	// Display a
	printf("You entered:\n");
	for(i=0; i < M; i++) {
		for(j=0; j < N; j++)
			printf("%d ", a[i][j]);
	    printf("\n");
	}

    // Read b
	printf("Please input array b:\n");
	for(i=0; i < N; i++)
		for(j=0; j < P; j++)
			scanf("%d", &b[i][j]);
			
	// Display array b
	printf("You entered:\n");
	for(i=0; i < N; i++) {
		for(j=0; j < P; j++)
			printf("%d ", b[i][j]);
	    printf("\n");
	}
	
	// multiply them
	// iterate thrugh rows and columns
	// of matrix c
	for(i=0; i < M; i++)
		for(j=0; j < P; j++) {
			// calculate dot product of vectors of
			// row i of matrix a and column j of
			// matrix b by iterating k 
			// from 0 to N-1
			
			for(k=0; k < N; k++) {
				c[i][j] += a[i][k] * b[k][j];
				printf ("\tk loop: a[%d][%d]=%d, b[%d][%d]=%d, c[%d][%d]=%d\n", i,k,a[i][k], k,j,b[k][j], i,j,c[i][j]);
			}
			printf("Calculated c[%d][%d] = %d\n", i, j, c[i][j]);
		}

	// Display array c
	printf("The summed array is:\n");
	for(i=0; i < M; i++) {
		for(j=0; j < P; j++)
			printf("%d ", c[i][j]);
	    printf("\n");
	}	
	
	printf("Bye\n");
	return;
}
