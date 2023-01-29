#include <stdio.h>

int add(int a, int b)
{
 return (a+b);
}
void main()
{
   int a = 2;
   int b = 5;
   printf("Hello world:addition of %d+%d=%d\n",a, b, add(a,b));

}
