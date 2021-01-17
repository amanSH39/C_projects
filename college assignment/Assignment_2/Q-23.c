#include <stdio.h>
int main()
{   int a, i=0;
    printf("Enter the number \n");
    scanf("%d", &a);
    do {
        i++;
        a = a/10;
     } while (a>0.5);
     printf("The number of digits are %d", i);
    return 0;

}