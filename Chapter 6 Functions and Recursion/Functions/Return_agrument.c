#include <stdio.h>
int addition(int x, int y);
int main ()
{
    int a,b,c;
    printf("Enter the two values to be added\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = addition(a, b);
    printf("The result is %d", c);
}
int addition(int x,int y)
{ int z;
  z =   x + y;
  return z;
}
