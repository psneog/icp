/*
 ============================================================================
 Name        : series.c
 Author      : p s neog
 Version     :0.1
 Copyright   : Your copyright notice
 Description : fibonacci series
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n = 0;		// no upto which we need the series
	int this_term = 1;     // current no.
	int previous_term = 0;  // term before
	int next_term = 0;  // next one

	int i = 0;

	//printf("Upto: ");
	scanf("%d", &n);

	printf("i  previous_term    this_term    next_term\n");

	while (i <= n) {
		printf("%d %10d  %10d  %10d\n", i, previous_term, this_term, next_term);
		next_term = this_term + previous_term;
		previous_term = this_term;
		this_term = next_term;
		i++;
	}

}
