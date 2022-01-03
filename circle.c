/**************************************

Program to find things about circle!

***************************************/


# include <stdio.h>

# define PI 3.141      // compiler deeirecive for symbolic constants


void main() {
    
    float radius = 5.0; 
    float area = 0.0, circumf = 0.0;
    
    printf("Enter the radius: ");
    
    scanf("%f", &radius);
    printf("The memory adress of area is %p and the value input is %f\n", &radius, radius);
    
    circumf = 2 * PI * radius;
    area = PI * radius*radius;
    
    
    printf ("The area is %3.2f and circumference is %4.3f\n", area, circumf);
    
    return;
    
}



