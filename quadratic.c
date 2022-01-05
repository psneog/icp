/******************************************************************************
Program to solve a quadratic equations 
of the form a*x^2 + b*x+ c = 0
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    // declaring and initializing the variables
    float disc = 0;
    float x1 = 0;
    float x2 = 0;
    float a = 0;
    float b = 0;
    float c = 0;
    
    printf("Quadratic equation solver\n");
    printf("Please enter a, b, c as in (ax^2 + bx + c = 0: ");
    scanf("%f%f%f", &a, &b, &c);
    
    // debug
    // printf("%f %f %f", a, b, c);
    
    // calculate the discremininant part first
    disc = b*b - 4*a*c;
    
    if (disc == 0) {
        printf("Real and equal roots\n");
        x1 = x2 = -b/(2*a);
        printf("And they are: %f & %f\n", x1, x2);
        
    } else {
        if (disc > 0) {
            printf("Real roots\n");
            x1 = (-b + sqrt(disc))/(2*a);
            x2 = (-b - sqrt(disc))/(2*a);
            printf("And they are: %f & %f\n", x1, x2);
        } else {
             printf("Imaginary roots\n");
            
            // the real part
            x1 = -b/(2*a);
            
            // the _Imaginary part
            x2 = sqrt (disc*(-1))/(2*a);
            
            printf("And they are: %f + i %f & %f - i %f\n", x1, x2, x1, x2);
        }
    }
    printf("Thanks for trying\nBye!\n");
    
    //done! get out - 
    return(0);
}
