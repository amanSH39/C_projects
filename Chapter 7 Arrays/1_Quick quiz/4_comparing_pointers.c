#include<stdio.h>
int main()
{
    int a = 7;
    int *i = &a;
    int *j = &a;
    printf("The address of a acc to i is %u\n", i);    
    printf("The address of a acc to j is %u\n", j);    
}