/********************************************
Program to calculate factorial using 
recursive function
*********************************************/

# include <stdio.h>

int factorial(int x);  	// declaration

void main() {
	
	int n, fact;
	
	// input n
	printf("Input n: ");
	scanf("%d", &n);
	fact = factorial(n);
	printf("%d! = %d\n", n, fact);
	return;
}

int factorial(int x) {  	// definition

    printf("\tCalling factorial() with x = %d\n", x); 
    if (x == 0) return(1);
    return(x * factorial(x-1));
    
}
