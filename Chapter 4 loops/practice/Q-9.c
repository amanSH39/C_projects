#include<stdio.h>
int main()
{
    int fac = 1;
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int i = n;
    while ( i>1)
    {  
        fac = fac*i;
         i--;
    }
    printf("Factorial is %d", fac);
    return 0;
}