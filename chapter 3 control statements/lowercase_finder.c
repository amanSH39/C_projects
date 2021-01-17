#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character \n");
    scanf("%c", &ch);
    if ("%d",(ch>96 && ch<123) || (ch>64 && ch<91))
    {
        if (ch>96 && ch<123) {
            printf("The character entered is lower case");
        }
        else {
            printf("The character entered is not lowercase");
        }
    }
    else {
        printf("The character entered is not even alphabet nigga");
    }
    return 0;
}