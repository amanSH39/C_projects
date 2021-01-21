#include<stdio.h>
void mul(int a);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    mul(a);
    printf("The value now is %d", a);
}
void mul(int a)
{
    a = 10*a;
}