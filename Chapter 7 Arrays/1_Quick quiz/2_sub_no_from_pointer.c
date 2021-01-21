#include<stdio.h>
int main()
{
    int b =5;
    int *j = &b;
    printf("The address of b is %u\n", j);
    j--;
    printf("The address after subtraction is %u\n", j);
}