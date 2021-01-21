#include<stdio.h>
int pass(int x);
int main()
{
    int i = 34;
    printf("The address of i is %d\n", &i);
    pass(i);
    return 0;
}
int pass(int x)
{
    return (printf("The address acc to fun pass is %d", &x));
}