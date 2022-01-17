/********************************************
Program to determine whether a number n is
prime or not
*********************************************/

# include <stdio.h>

void main() {
	
	int n = 1;	// number to be tested
	
	int i = 2;	// will test n by dividing
			// by i
			
	int flag = 1; 	// boolean flag
			// will be set to logical 
			// false when n is found
			// to be not prime
		
	printf("Please enter n: ");
	scanf("%d", &n);
	
	// test for divisibility of n by i
	// by verying i from 2 to n-1
	while( (i < n/2) && flag) {
	    
	    // divisibility test 	   
	    if (n % i == 0) {
	        flag = 0;
	    } // if
	    i++;
	} // while
	
	if(flag)
	    printf("%d is prime\n", n);
	else
	    printf("%d is not prime\n", n);
	    
	return;
}
