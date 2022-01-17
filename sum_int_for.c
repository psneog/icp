/********************************************
Program to calculate 1 + 2 + 3 + ..... + n
usung while
*********************************************/

# include <stdio.h>

void main() {
	
	int sum = 0;
	int i = 1;
	int n = 0;
	int sum_verify = 0;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	
	// using for
	
	for (i = 1; i <= n; i++) {
	    sum += i;	// equivalent to sum = sum + i
	}
	
	
	// Bad programming practice
	// Follow KISS principle while programming
	// Keep It Simple & Stupid
	
	//for(i = 1, sum = 0; i <= n; sum += i++);
	
	printf("The sum is = %d\n", sum);
	
	// verification
	sum_verify = (n * (n+1))/2;
	printf("Sum using formula is = %d\n", sum_verify);
	
	return;
}
