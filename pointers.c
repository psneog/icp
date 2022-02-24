/********************************************
Program to demonstrate pointers
*********************************************/

# include <stdio.h>


void pointer_basics() {
	
	int a = 10;
	char ch = 'p';
	
	int *ip1; 	// pointer to integer
	char *cp1; 	// pointer to character
	
	ip1 = &a;	// assigns address of a to ip1
	cp1 = &ch;	// assigns address of ch to cp1
	
	printf("Value of a = %d\n", a);
	printf("Address of a = %p\n", &a);
	
	printf("Value of ip1 = %p\n", ip1);
	printf("Address of ip1 = %p\n", &ip1);
	
	// indirection (* = indirection operator)
	printf("Value stored at address pointed by ip1 = %d\n", *ip1);
	
	return;
}

// function to exchange the values of two variables
void swap(int *x, int *y) {
	int tmp;
	
	printf("\tswap(): adresses of x,y = %p, %p\n", &x, &y);
	printf("\tswap(): adresses passed in x,y = %p, %p\n", x, y);
	printf("\tswap(): swaping *x = %d, *y = %d\n", *x, *y);
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("\tswap(): swapped x = %d, y = %d\n", *x, *y);
	
	return;
}


void main() {
	
    int p = 10, q = 20;
    
    printf("main(): swaping p = %d, q = %d\n", p, q);
    printf("main(): adresses of p,q = %p, %p\n", &p, &q);
    
    
    swap(&p, &q);
    printf("main(): swaping p = %d, q = %d\n", p, q);
    
	return;
}
