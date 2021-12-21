
#include <stdio.h>

// Function signature
void fxn1(int);

int main()
{
   int num = 0;

   printf("Enter any number\n");
   scanf("%d", & num);

   //Pass a COPY of variable num to the function
   fxn1(num);

   printf("\nnum contains %d", num);

   return 0;

} // end main()

// fxn1() changes the contents of the parameter
void fxn1(int n1)
{
   printf("\nn1 contains %d\n", n1);

   //increment n1
   n1++; // n1 = n1 + 1;

   printf("\nn1 contains %d\n", n1);

} // end fxn1()
