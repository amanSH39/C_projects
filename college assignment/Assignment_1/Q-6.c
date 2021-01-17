#include <stdio.h>
int main()
{
    int num;
    int denom;
    int quotient;
    int mod;

    printf("Enter the numerator \n");
    scanf("%d", &num);
    printf("Enter the denominator \n");
    scanf("%d", &denom);
    quotient =  num/denom;
    mod = num%denom;
    printf("the quotient is %d \n", quotient);
    printf("The reamainder is %d", mod);
    return 0;

}