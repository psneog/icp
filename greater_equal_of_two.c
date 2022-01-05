/********************************************
Program to find the greater of two numbers

Things to learn
1. if .. else statement
2. logical/boolean expressions

*********************************************/

# include <stdio.h>

void main() {
	
	// variables
	int a = 0, b = 0;  // declaration and initialization
	
	// input the variables
	printf("Please give a and b: ");
	scanf("%d%d", &a, &b);
	
	// DEBUG:
	// for testing whether input is correct or not
	printf("a = %d, b = %d\n", a, b);
	
	// test for greater number
	if (a == b) {                      // equal case
	    printf("Both are equal\n");
	} else {
	    if (a > b) {                   // test for greater
		printf("a (%d) is greater\n", a);
	    } else {
		printf("b (%d) is greater\n", b);
	    }
	}
	
	return;
}
