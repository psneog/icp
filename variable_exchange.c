/********************************************
You have 2 variables, exchange their values
********************************************/

# include <stdio.h>

# define MILK 10
# define WATER 20

void main() {

     int a = WATER, b = MILK;
     int temp;  // empty
     
     printf ("Before exchange: a = %d, b = %d\n", a,b);
     
     // exchange

/*     
     temp = b;  // put MILK in b in empty glass temp
     b = a;     // pour WATER of a into b
     a = temp;  // pour MILK in temp to a 
*/

     // without third variable
     
     b = a + b;  // now b (new b) contains 30 (i.e. 10 (old a) +20 (old b))
     a = b - a   // now a (new a) contains 20 (i.e. 30 (new b) - 10 (old a)
     b = b - a   // now b (new b) contains 10 (i.e. 30 (new b) - 20 (new a)
        
     printf ("After exchange: a = %d, b = %d\n", a,b);
     return;
     
}    // main()
