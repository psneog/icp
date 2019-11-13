/*
 ============================================================================
 Name        : Pointers.c
 Author      : PSNeog
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void demo_basic() {

	// integer variables
	int int1 = 10;
	int int2 = 20;

	// float variables
	float fl1 = 0.0;
	float fl2 = 0.0;

	// some int pointers
	int *int_p1;
	int *int_p2;

	// some float pointers
	float *fl_p1;
	float *fl_p2;

	// lets examine what we have

	printf("%-20s, %20s, %10s\n", "identifier", "memory address", "value");
	printf("---------------------------------------------------------\n");
	printf("%-20s, %20p, %10d\n", "int int1", &int1, int1);
	printf("%-20s, %20p, %10d\n", "int int2", &int2, int2);

	// However, the  real shit is here:

//	printf("%10s, %20s, %10s\n", "identifier", "memory address", "value");
	printf("%-20s, %20p, %10d\n", "int *int_p1", &int_p1, int_p1);
	printf("%-20s, %20p, %10d\n", "int *int_p2", &int_p2, int_p2);

	printf("\n\n\n%-20s, %20s, %10s\n", "identifier", "memory address", "value");
	printf("-----------------------------------------------\n");
	printf("%-20s, %20p, %10d\n", "float fl1", &fl1, fl1);
	printf("%-20s, %20p, %10d\n", "float fl2", &fl2, fl2);

	// However, the  real shit is here:

	//	printf("%10s, %20s, %10s\n", "identifier", "memory address", "value");
	printf("%-20s, %20p, %10f\n", "float fl_p1", &fl_p1, fl_p1);
	printf("%-20s, %20p, %10f\n", "float fl_p2", &fl_p2, fl_p2 );

	return;
}

int main(void) {
	puts("!!!Introduction to Pointers!!!"); /* prints !!!Introduction to Pointers!!! */
	demo_basic();
	return EXIT_SUCCESS;
}
