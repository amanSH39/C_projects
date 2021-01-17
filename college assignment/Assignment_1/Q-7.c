#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the vlaue of b \n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The value of a now is %d \n", a);
    printf("The value of b now is %d ", b);
    return 0;
}