/********************************************
Program to demonstrate relationship between 
pointers and arrays
*********************************************/

# include <stdio.h>

void scan_array(int arr[], int len) {
  	int i;
	for(i=0; i < len; i++)
		scanf("%d", /* &arr[i] */ arr+i);
	return;
}



void print_array(int arr[], int len) {
  	int i;
	for(i=0; i < len; i++)
		printf("%p -> %d\n", arr+i, *(arr+i));
	printf("\n");
	return;
}


void main() {
	
    int 	array[5];
   
	scan_array(array, 5);
    print_array(array, 5);
     	
	return;
}
