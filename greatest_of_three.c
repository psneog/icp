/********************************************
Program to find greatest of three numbers
*********************************************/

# include <stdio.h>

void main() {
	
	int a, b, c;

	printf("Please give three numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {  					// a, b plays first
		// printf("a wins, will play with c\n");
		if (a > c) {				// a plays c
		    printf("a wins with c\n");
			printf("so a (%d) is greatest\n", a);
		} else {
			printf("a looses to c\n");
			printf("so c (%d) is greatest\n", c);
		}							// if (a > c)
	} else {      					// a looses, b plays c
		printf("b wins, will play with c\n");
		if (b > c) {				// b plays c
		    printf("b wins with c\n");
			printf("so b (%d) is greatest\n", b);
		} else {
			printf("b looses to c\n");
			printf("so c (%d) is greatest\n", c);
		}							// if (b > c)
	}  								// if (a > b)
	return;
}
