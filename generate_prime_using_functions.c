/*
 * prime.c
 *
 *  Created on: 17-Sep-2019
 *      Author: Prabhakar
 */

/**********************************************
 * Program to find N prime numbers.           *
 *********************************************/

# include <stdio.h>

/**********************************************
Declaration of Function to determine 
whether n is prime or not
returns 1 if n is prime, 0 otherwise
***********************************************/

int isprime(int n /* parameter, passed "by value" */);

/**********************************************
Declaration of Function to generate primes
from 1 to n
***********************************************/
void generate_prime(int n);

void main() {
   int n = 0;
   printf("Input n: ");
   scanf("%d", &n /* passing "by referance" */);
   generate_prime(n);
   printf("\nBye...\n");
   return;
}
   



/**********************************************
Definition of Function to generate primes
from 2 to n
***********************************************/
void generate_prime(int n) {
    
    int i;
    
    printf("Prime numbers from 1 to %d\n", n);
    
    for (i = 2; i <= n; i++) {
        if(isprime(i)) {
            printf("%d ", i);
        } // if
    } // for
} // generate_prime



/**********************************************
Definition function to determine 
whether n is prime or not
returns 1 if n is prime, 0 otherwise
***********************************************/

int isprime(int n /* parameter, passed "by value" */) {
    
    int i = 0;
    int flag = 1;	// true, we are assuming that
    			// n is prime
    // printf("Passed value of n is %d\n", n);			
    for(i = 2; i <= n/2 && flag; i++) {
        if (!(n % i)) flag = 0;
    }  
    
    return(flag);
}






