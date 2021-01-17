#include <stdio.h>
#include <math.h>
int main()
{   float a,b;
    char o;
    printf("Enter the first number\n");
    scanf("%f", &a);
    printf("Enter the operator\n");
    scanf("%s", &o);
    printf("Enter the second number \n");
    scanf("%f", &b);
    if ( o == '+') printf("The result is %f", a+b);
    else if  ( o == '-') printf("The result is %f", a-b);
    else if  ( o == '*') printf("The result is %f", a*b);
    else if  ( o == '/') printf("The result is %f", a/b);
    // else if  ( o == '%') printf("The result is %f", a%b);
    else printf("Enter the valid operator");
    return 0;
}