/********************************************
Program to demonstrate dynamic memory allocation
*********************************************/

# include <stdio.h>
# include <stdlib.h>

void main() {
	
	int *ip = (int*)100; 	// integer pointer
	int size_int = sizeof(int);
	
	printf("Adddress of ip before memory allocation: %p\n", &ip);
	printf("Value in ip before memory allocation: %p\n", ip);
	
	// allocate memory dynamically to *ip
	//ip = (int*)malloc(size_int);
	
	printf("Adddress of ip after memory allocation: %p\n", &ip);
	printf("Value in ip after memory allocation: %p\n", ip);
	
	// read a value in teh location pointed by *ip
	scanf("%d", ip);
	printf("%d\n", *ip);
	
	return;
}
