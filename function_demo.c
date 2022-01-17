/********************************************
Program to calculate 1 + 2 + 3 + ..... + n
usung functions
*********************************************/

# include <stdio.h>

void for_loop_demo();  	 	// function declaration
void cryptic_for_loop_demo();

void main() {
	printf("Calling for loop demo:\n");
        for_loop_demo();    		// function calling
       
        printf("Calling cryptic for loop demo:\n");
	cryptic_for_loop_demo();
}


void for_loop_demo() {      		// function definition
	
	int sum = 0;
	int i = 1;
	int n = 0;
	int sum_verify = 0;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	
	// using for
	
	for (i = 1; i <= n; i++) {
	    sum += i;		// equivalent to sum = sum + i
	}
	
	printf("The sum is = %d\n", sum);
	
	// verification
	sum_verify = (n * (n+1))/2;
	printf("Sum using formula is = %d\n", sum_verify);
	
	return;
}

void cryptic_for_loop_demo() {      	// function difinition
	
	int sum = 0;
	int i = 1;
	int n = 0;
	int sum_verify = 0;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	
	// Bad programming practice
	// Follow KISS principle while programming
	// Keep It Simple & Stupid
	
	for(i = 1, sum = 0; i <= n; sum += i++);
	
	printf("The sum is = %d\n", sum);
	
	// verification
	sum_verify = (n * (n+1))/2;
	printf("Sum using formula is = %d\n", sum_verify);
	
	return;
}

