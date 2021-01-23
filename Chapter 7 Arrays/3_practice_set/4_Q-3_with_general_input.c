#include<stdio.h>
int main()
{
    int mul[10];
    int *ptr = mul;
    int n;
    printf("Enter the no. you want table of\n");
    scanf("%d", &n);
    printf("\n");
    for(int i=0; i<10; i++)
    {
       mul[i] = (i+1)*n;
    }
     for(int j=0; j<10; j++)
     {
         printf("%dX%d = %d\n",n, j+1, *(ptr+j));
     }
}