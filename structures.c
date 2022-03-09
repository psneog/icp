/********************************************
Program to demonstrate structures
*********************************************/

# include <stdio.h>

// define a new structure data type student
struct student {
	int 	rollno;
	char 	name[100];
	float	percentage;
};

typedef struct student STUD;

void struct_demo() {
	
	// define student variables
	struct student stud;
	//STUD stud;
	
	// read data for students
	printf("Enter data for student:\n");
	printf("Roll No: ");
	scanf("%d", &stud.rollno);
	printf("Name: ");
	scanf("%s", stud.name);
	printf("Percentage: ");
	scanf("%f", &stud.percentage);
	
	// Display student data
	printf("\nStudent data\n");
	printf("Roll No: %d\n", stud.rollno);
	printf("Name: %s\n", stud.name);
	printf("Percentage: %f\n", stud.percentage);
	
	return;
}

void scan_int(int *n) {
	printf("Give an int: ");
	scanf("%d", n);
	return;
}


void scan_student(struct student *stud) {
	// read data for students
	printf("Enter data for student:\n");
	printf("Roll No: ");
	scanf("%d", &stud.rollno);
	printf("Name: ");
	scanf("%s", stud.name);
	printf("Percentage: ");
	scanf("%f", &stud.percentage);
	return;
}
	
void print_student(struct student stud) {
	// Display student data
	printf("\nStudent data\n");
	printf("Roll No: %d\n", stud.rollno);
	printf("Name: %s\n", stud.name);
	printf("Percentage: %f\n", stud.percentage);	
	return;
}

void main() {

	struct student my_student;
	//int tmp;
	
	//scan_int(&tmp);
	//printf("tmp = %d\n", tmp);
	
	scan_student(&my_student);
	//print_student(my_student);
	
	return;
}

