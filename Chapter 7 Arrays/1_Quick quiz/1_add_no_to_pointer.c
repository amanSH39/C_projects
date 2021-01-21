#include<stdio.h>
int main()
{
    int *i;
    int a = 3;
    i = &a;
    printf("The address of a is %u\n", i);
    i++;
    printf("The value of address after addtion is %u\n", i);
    char c = 'a';
    char *k = &c;
    printf("The address of c is %u\n", k);
    k++;
    printf("The address of c after addtion is %u\n", k);
    
}