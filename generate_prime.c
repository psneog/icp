/*
 * prime.c
 *
 *  Created on: 17-Sep-2019
 *      Author: Prabhakar
 */

/**********************************************
 * Program to find N prime numbers.\
 *
 *
 *
 *
 *
 *********************************************/

int main() {
	int n = 10;				// to find
	int is_prime = 1;		// assume all prime initially
	int i  = 2, j = 1;		// i = 1, 2, 3, .....
							// j = 1, 2, ..... i

	while (i <= n ) {    				// need to test i for prime.
		j = 2;
		while (j <= i && is_prime) {	// try
			if ( i % j) {				// is i divisible by j?
				is_prime = 0;
			}
			j++;
		}
		i++;
	}
}



