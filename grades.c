/********************************************
Program to calculate grades of students

Marks range	Grade	Code
100 - 94	AA	1
93 - 87 	AB	2
86 - 80	BB	3 
79 - 73	BC	4
72 - 65	CC	5
64 - 57 	CD	6
56 - 50	DD	7
Below 50	F	8

First we'll calculate codes given a mark inside
a nested if statement. Then we'll use the 
switch ststement to display the grade according 
to the code calculated  

*********************************************/

# include <stdio.h>

void main() {
	
	float mark = 0.0;
	int   code = 0;
	
	// input marks
	printf("Mark: ");
	scanf("%f", &mark);	
	
	// calculate code 
	// (in a way that the student benefits  ;-)
	// i.e. the effect of the following comparisons
	// would be as if we are rounding up floating 
	// pt marks to the next integer value.
	// i.e. if someone gets 93.1, (s)he will get AA
	
	if (mark <= 100 && mark > 93) {
	    code = 1;
	} else {
	    if (mark > 86) {
	        code = 2;
	    } else {
	        if (mark > 79) {
	            code = 3;
	        } else {
	            if (mark > 72) {
	                code = 4;
	            } else {
	                if (mark > 64) {
	                    code = 5;
	                } else {
	                    if (mark > 56) {
	                        code = 6;
	                    } else {
	                        if (mark >= 50) {
	                            code = 7;
	                        } else {
	                            code = 8;
	                        } // code 7, 8
	                    } // code 6
	                } // code 5
	            } // code 4
	        } // code 3
	    } // code 2
	} // code 1   
	    
	// now display the grade using switch
	
	switch (code) {
	    case 1: printf ("Grade = AA\n"); break;
	    case 2: printf ("Grade = AB\n"); break;	
	    case 3: printf ("Grade = BB\n"); break;
	    case 4: printf ("Grade = BC\n"); break;
	    case 5: printf ("Grade = CC\n"); break;
	    case 6: printf ("Grade = CD\n"); break;
	    case 7: printf ("Grade = DD\n"); break;
	    case 8: printf ("Grade = F\n"); break;
	    default: printf ("Grade not defined\n"); break;
	}
	
	return;
}


















