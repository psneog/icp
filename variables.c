// Program to demonstrate identifiers, 
// constants and variables
// also some input output

# include <stdio.h>

int main() {
    
    // integer variables
    int a, b, c;
    int d = 10, e = 50;
  
    
    a = 50;  // 10 assigned to a
    b = 20;  // 20 ''        ''  b
    c = a + b;
    
    printf("Value of %d\n", c);         
    printf("Octal value of c is %o\n", c);
    printf("Hex value of c is %0x\n", c);   
    printf("Char value of c is [%c]\n", c);
  
  
    return(0);
}
