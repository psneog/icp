/********************************************
Program to demonstrate union data type
*********************************************/

# include <stdio.h>
# include <string.h>

void main() {
	
	union int_or_string {
		int intval;
		char stringval[50];
	};
	
	typedef union int_or_string ios;
	
	union int_or_string is1, is2;
	ios is3;
	
	is1.intval = 10;
	strcpy(is2.stringval, "Hello");
	
	printf("%d, %s\n", is1.intval, is2.stringval);
	printf("%s, %d\n", is1.stringval, is2.intval);
	
	printf("%p, %p\n", &is1.intval, &is2.stringval);
	printf("%p, %p\n", &is1.stringval, &is2.intval);
	
	return;
}
