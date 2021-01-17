// greatest of the four entered numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, temp;
    printf("Enter the first number \n");
    scanf("%d", &num1);
    printf("Enter the second number \n");
    scanf("%d", &num2);
    printf("Enter the third number \n");
    scanf("%d", &num3);
    printf("Enter the  fourth number \n");
    scanf("%d", &num4);
    
    if (num1>num2)
    {
        temp = num1;
        if (num1>num3) {
            if (num1>num4) {printf("The greatest number is %d", temp);}
            else if (num4>num1) {temp = num4; printf("The greatest number is %d", temp);}
        }
        else if (num3>num1)  {
            temp = num3;
            if (num3>num4) {printf("The greatest number is %d", temp);}
            else if (num4>num3) {temp = num4; printf("The greatest number is %d", temp);}
        }
    }
    else if (num2>num1)
    {
        temp = num2;
        if (num2>num3) {
            if (num2>num4) {printf("The greatest number is %d", temp);}
            else if (num4>num2) {temp = num4; printf("The greatest number is %d", temp);}
        }
        else if (num3>num2) {
            temp = num3;
            if (num3>num4) {printf("The greatest number is %d", temp);}
            else if (num4>num3) {temp = num4; printf("The greatest number is %d", temp);}
        }
    }
return 0;

}