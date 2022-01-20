/********************************************
Program to demonstrate scope and extent 
of a variable
*********************************************/

# include <stdio.h>

// exchanges two variables a & b
void swap_by_value(int a, int b);
void swap_by_referance(int *a, int *b); 	// passing integer pointers

void main() {
	
    int x, y;
   
    printf("main()\nInput x & y: ");
    scanf("%d%d", &x, &y);
    
/*
    printf("main()-> before swap(): x = %d (%p), y = %d (%p)\n", x, &x, y, &y);
    swap_by_value(x, y);
    printf("main()-> after swap(): x = %d (%p), y = %d (%p)\n", x, &x, y, &y);
*/

    printf("main()-> before swap(): x = %d (%p), y = %d (%p)\n", x, &x, y, &y);
    swap_by_referance(&x, &y /* passing parameters by referance */);
    printf("main()-> after swap(): x = %d (%p), y = %d (%p)\n", x, &x, y, &y);

    
    return;
}


// Definition of swap()
void swap_by_value(int a, int b) {

    int temp = 0; 
   
    printf("swap() in: a = %d (%p), b = %d (%p)\n", a, &a, b, &b);
    //swap
    temp = a;
    a = b;
    b = temp;
    
    printf("swap() out: a = %d (%p), b = %d (%p)\n", a, &a, b, &b);
    return;
}

// Definition of swap()
void swap_by_referance(int *a, int *b) {

    int temp = 0; 
   
    printf("swap() in: a = %d (%p), b = %d (%p)\n", *a, a, *b, b);
    // we dont need to write &a, because a itself is an address
    
    //swap
    temp = *a;
    *a = *b;
    *b = temp;
    
    printf("swap() out: a = %d (%p), b = %d (%p)\n", *a, a, *b, b);
    return;
}

