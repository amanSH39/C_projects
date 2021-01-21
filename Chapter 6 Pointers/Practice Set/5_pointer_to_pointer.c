#include<stdio.h>
int main()
{
    int i=39,*j,**k;
    j = &i;
    k = &j;
    printf("The value acc to pointer to variable is %d\n", *j);
    printf("The value acc to pointer to pointer is %d\n", **k);
    return 0;
}