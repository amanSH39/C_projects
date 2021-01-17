#include<stdio.h>
void star(int x);
int main()
{
    int s;
    printf("Enter the n\n");
    scanf("%d", &s);
    star(s);
}
void star(int x)
{   int i;
    if (x ==1)
    {   printf("*\n");
        return;
    }
    else 
    {
        star(x-1);
        for(i=1; i<=(2*x-1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}