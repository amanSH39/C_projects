#include<stdio.h>
int main()
{
    int a = 3;
    int *j = &a;
    int *c = *(&j);
    printf("The value of a is %d\n", a);
    printf("The address of a is %d\n", &a);
    printf("The address of a is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of a according to address %d\n", *j);
    printf("The value of j according to address %d", *(&j));
    return 0;
}