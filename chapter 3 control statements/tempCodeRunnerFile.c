#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter Number 1\n");
    scanf("%d", &a);

    int b;
    printf("Enter Number 2\n");
    scanf("%d", &b);
    int sum=0;
    sum=a+b;
    printf("Sum is %d\n", sum);

    return 0;
}