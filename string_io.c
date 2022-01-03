/********************
String input output
*********************/

# include <stdio.h>

void main() {

   char  name[100];  // a string variable
   
   printf("Name: ");
   scanf("%[^\n]", name);  // with strings, we dont use the & (address) operator
   
   printf("Hello %s!\n", name);
   return;
}
