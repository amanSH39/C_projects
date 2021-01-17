#include <stdio.h>
int main()
{   int a;
    printf("Enter the ordinal number of month\n");
    scanf("%d", &a);
    if (a<1 || a>12) printf("Enter the valid input");
    else if (a==1) printf("Its January");
    else if (a==2) printf("Its Febuary");
    else if (a==3) printf("Its March");
    else if (a==4) printf("Its April");
    else if (a==5) printf("Its May");
    else if (a==6) printf("Its June");
    else if (a==7) printf("Its July");
    else if (a==8) printf("Its August");
    else if (a==9) printf("Its September");
    else if (a==10) printf("Its October");
    else if (a==11) printf("Its November");
    else if (a==12) printf("Its December");
}