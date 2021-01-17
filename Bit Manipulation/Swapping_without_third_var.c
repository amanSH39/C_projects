#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    a = a^b;
    b = b^a;
    a = a^b;
    printf("the value of a now is %d\n", a);
    printf("the value of b now is %d", b);
    return 0;
    
}