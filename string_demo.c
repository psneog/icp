/********************************************
Program to demonstrate properties of string
*********************************************/

# include <stdio.h>
# include <string.h>

// How elements are stored in memory
void demo1() {
    char message1[] = "He\\0l\"lo";		// like a string
    char message2[] = {'w', 'o', '\0', 'r', 'l', 'd', '\0'}; // array format
    
    printf("%s %s\n", message1, message2);
    return;
}

// string memory locations
void demo2() {
    char message1[] = "Hello";		// like a string
    int len = strlen(message1);  	// LENGTH OF MESSAGE1
    int i;
    
    printf("Address of first element of the string: %p\n", message1);
    for(i = 0; i < len; i++) 
        printf("%p --> %c\n", &message1[i], message1[i]);
    return;
}


void main() {
	
    demo1();	
	return;
}
