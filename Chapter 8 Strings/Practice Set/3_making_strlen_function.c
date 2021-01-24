#include<stdio.h>
int strlength(char *str)
{   int i = 0;
    while(*str!= '\0')
    {
        i++;
        str++;
    }
    printf("the length of the string is %d", i);
}
int main()
{   char *str;
    printf("Enter the string\n");
    gets(str);
    strlength(str);
}