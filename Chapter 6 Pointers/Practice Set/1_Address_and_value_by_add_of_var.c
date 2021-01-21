#include<stdio.h>
int main()
{
    int a=39;
    int *j;
    j = &a;
    printf("The address of a is %u\n", j);
    printf("The address of a is %d\n", &a);
    printf("The value acc to address of a is %d\n", *(&a));
    printf("The value of a is %u", *j);
    return 0;
}