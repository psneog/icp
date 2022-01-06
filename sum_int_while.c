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
	
	
	// using while
	while (i <= n) {
	    sum += i;	// equivalent to sum = sum + i
	    i++;	// equivalent to i = i + 1
	}
	
	printf("The sum is = %d\n", sum);
	
	// verification
	sum_verify = (n * (n+1))/2;
	printf("Sum using formula is = %d\n", sum_verify);
	
	return;
}
