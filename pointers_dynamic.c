/********************************************
Program to demonstrate dynamic memory allocation
*********************************************/

# include <stdio.h>
# include <stdlib.h>

void basic_dynamic_memory_allocation() {
	
	int *ip = (int*)1000; 	// integer pointer
	int intvar = 100;
	
	printf("Adddress of ip before memory allocation: %p\n", &ip);
	printf("Value in ip before memory allocation: %p\n", ip);
	
	// allocate memory dynamically to *ip
	ip = (int*)malloc(sizeof(int));
	
	printf("Adddress of ip after memory allocation: %p\n", &ip);
	printf("Value in ip after memory allocation: %p\n", ip);
	printf("Value at location pointed by p: %d\n", *ip);
	
	// read a value in the location pointed by *ip
	printf("Enter an int: ");
	scanf("%d", ip);
	printf("We read: %d\n", *ip);
	
	// free() up memory, or face memory leak
	// due to the "dangling pointer" problem
	free(ip);
	return;
}

void pointers_and_arrays() {
 	int *ip;
 	int arr[5] = {1, 2, 3, 4, 5};
 	int i;
 	
 	ip = arr;
 	
 	// some pointer arithmatics
 	printf("i\t arr[i]\t *(arr+i)\t ip[i]\t *(ip+i)\n");
 	for(i=0; i < 5; i++) {		
 		printf("%d\t %d\t %d\t %d\t %d\n", i, arr[i], *(arr+i), ip[i], *(ip+i));
 	}
 	
 	// precedence in pointer arithmetic
 	// +/- takes precedence over *
 	printf("i\t arr[i]\t *arr+i\t ip[i]\t *ip+i\n");
 	for(i=0; i < 5; i++) {		
 		printf("%d\t %d\t %d\t %d\t %d\n", i, arr[i], *arr+i, ip[i], *ip+i);
 	}
 	
 	// examine the addresses
 	printf("i\t &arr[i]\t arr+i\t &ip[i]\t ip+i\n");
 	for(i=0; i < 5; i++) {		
 		printf("%d\t %p\t %p\t %p\t %p\n", i, &arr[i], arr+i, &ip[i], ip+i);
 	}
 	
 	// perform arithmetic operations on array elements
 	// in presence of pointer arithmatic
 	// we will add 5 to each of the array elements.
 	printf("i\t arr[i]+5\t *arr+i+5\t ip[i]+5\t *ip+i+5\n");
 	for(i=0; i < 5; i++) {		
 		printf("%d\t %d\t %d\t %d\t %d\n", i, arr[i]+5, *arr+i+5, ip[i]+5, *ip+i+5);
 	}
 	return;
}

// Function demonstrating arrays using dynamic memory allocation
void dynamic_arrays() {

	int *arrptr;	// int pointer
	int i;			// index variable
	
	
	arrptr = (int*)malloc(5*sizeof(int));
	arrptr = (int[]){5, 6, 7, 8, 9};
	
	printf("The array is\n");
 	for(i=0; i < 5; i++) {		
 		printf("%d ", arrptr[i]);
 	}
 	printf("\n");
	return;
}

// can we use int **ip as a 2D array?
// self study
// hint: we are talking about pointers of pointers
	

void main() {
	dynamic_arrays();
	return;
}
