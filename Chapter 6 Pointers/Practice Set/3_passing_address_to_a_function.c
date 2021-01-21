#include<stdio.h>
void mul(int *a);
int main()
{
    int a=100;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    mul(&a);
    printf("The value of a now is %d", a);
}
void mul(int *a)
{   *a = *a*10;
    
}