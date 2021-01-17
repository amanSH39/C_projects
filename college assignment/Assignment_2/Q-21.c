#include <stdio.h>
int main()
{
    int a,b,i=1,j;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    while (i<=a && i<=b){
        i++;
        if (a%i ==0 && b%i ==0) {
            j = i;

        }
    }
    printf("The GCD is %d", j);
    return 0;
}
