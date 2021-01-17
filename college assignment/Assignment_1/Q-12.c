#include <stdio.h>
int main()
{
    int b;
    int a=214;
    while(a>0)
    {
     b=a%16;
     b= a/16;
    }
   printf("rem=%d\n",b);
}