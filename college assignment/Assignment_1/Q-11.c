#include<stdio.h>
int main()
{   char ch;
    printf("enter a character \n");
    scanf("%c", &ch);
    if ("%d", ch>47 && ch<58 ) 
    {
        printf("Entered charcter is a digit \n");
    }
    else if ("%d", (ch>64 && ch<91) && (ch>96 && ch<123))
    {
        printf("Entered character is alphabet \n");
    }
    else {
        printf("Entered character is neither a digit or alphabet \n");
    }
    return 0;

}