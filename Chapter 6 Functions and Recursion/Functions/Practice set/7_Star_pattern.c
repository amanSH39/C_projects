#include<stdio.h>
void star(int x);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    star(a);
}
void star(int x)
{
    int i,n=0;
    while(n<x) 
    { n++;
    for(i=1; i<=(2*n-1); i++)
    {
     printf("*");
    }
     printf("\n");
    }
}