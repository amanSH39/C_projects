#include <stdio.h>
int main ()
{
    int a,b;
    int sum;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    sum = a+b;
    printf("The sum is \n%d", sum);
    return 0;
}