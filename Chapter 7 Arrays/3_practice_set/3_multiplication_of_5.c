#include<stdio.h>
int main()
{
    int mul[10];
    int *ptr = mul;
    for(int i=0; i<10; i++)
    {
       mul[i] = (i+1)*5;
    }
     for(int j=0; j<10; j++)
     {
         printf("5X%d = %d\n",j+1, *(ptr+j));
     }
}