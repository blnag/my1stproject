#include <stdio.h>

int add(int a, int b)
{
 return (a+b);
}

int sub(int a, int b)
{
 return (a-b);
}
int mul(int a, int b)
{
 return (a*b);
}
void main()
{
   int a = 2;
   int b = 5;

   printf("Hello world\n");
   printf("addition of %d+%d=%d\n",a, b, add(a,b));
   printf("Sub of %d-%d=%d\n", a, b, sub(a,b));
   printf("Multiplication of %dx%d=%d\n", a, b, mul(a, b));
}
