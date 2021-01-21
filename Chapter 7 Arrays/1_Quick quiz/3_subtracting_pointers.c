#include<stdio.h>
int main()
{
    int a = 6;
    int b = 9;
    int *i = &a;
    int *j = &b;
    int k;
    k = i-j;
    printf("The address of a is %u\n", i);
    printf("The address of b is %u\n", j);
    printf("The subtraction of addresses is %d", k);
}