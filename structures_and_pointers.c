/********************************************
Program to demonstrate relationship between 
structures and pointers
*********************************************/

# include <stdio.h>

struct student {
	int 	rollno;
	char	name[100];
	float	pc;
};

void main() {
	
	struct student std = {10, "Harry Potter", 80};
	struct student *stdptr;
	
	stdptr = &std;
	
	printf("Roll no: %d\nName: %s\nMarks: %f\n", 
			std.rollno, std.name, std.pc);
	printf("Addresses\nRoll no: %p\nName: %p\nMarks: %p\n", 
			&std.rollno, std.name, &std.pc);
	
	printf("Address of stdptr = %p, std = %p\n",
			&stdptr, &std);
	printf("Value stored at stdptr = %p\n", stdptr);
	
	
	// How to access members of structure std
	// through stdptr
	printf("Through stdptr.....\n");
	printf("Roll No: %d\n", (*stdptr).rollno);
	printf("Name: %s\n", stdptr->name);
	printf("Marks: %f\n", stdptr->pc);
	
	return;
}
