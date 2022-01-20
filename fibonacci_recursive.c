/********************************************
Program to calculate fibonacci using 
recursive function
*********************************************/

# include <stdio.h>

int fibonacci(int x);  	// declaration

void main() {
	
	int n, fact;
	
	// input n
	printf("Input n: ");
	scanf("%d", &n);
	fact = fibonacci(n);
	printf("fibonacci number %d = %d\n", n, fact);
	return;
}

int fibonacci(int x) {  	// definition

    printf("\tCalling fibonacci() with x = %d\n", x); 
    if (x == 1) return(1);
    if (x == 2) return(2);
    return (fibonacci(x-1) + fibonacci(x-2));
    
}
