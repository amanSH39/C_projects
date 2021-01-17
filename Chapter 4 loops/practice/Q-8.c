#include<stdio.h>
int main ()
{
    int n;
    int fac = 1;
    printf("Enter the value\n");
    scanf("%d", &n);
    for (int i = n; i>1; --i)
    {
        fac = fac*i;
    }
    printf("Factorial is %d", fac);
    return 0;
}

