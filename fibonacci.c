/********************************************
Program to generate fibonacci numbers
*********************************************/

# include <stdio.h>

void main() {
	
	int fib = 0;
	int fib_prev = 2;
	int fib_prev_prev = 1;
	int i = 3;
	int n = 0;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	// display first 2 fibonacci numbers
	printf("1 2 ");
	
	while(i <= n) {
	
	    fib = fib_prev + fib_prev_prev;
	    printf("%d ", fib);
	    
	    fib_prev_prev = fib_prev;
	    fib_prev = fib;
	    i++;
	} // while
	
	printf("\nThanks!\n");
	
	return;
}
