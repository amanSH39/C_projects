#include <stdio.h>
int main()
{   int a,b;
    int result;

    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the Second Number \n");
    scanf("%d", &b);
    result = a*b;
    printf("The multiple is %d", result);

    return 0;
}