#include<stdio.h>
int main()
{
    int n = 8;
    int i = 0;
    int total = 0;
    while (i<=10)
    {
        total= total + n*i;
        i++;
    }
    printf("Total is %d", total);
    return 0;
}