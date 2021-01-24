#include<stdio.h>
#include<string.h>
int main()
{   int c,i=0;
    char str[40];
    char strn[39];
    printf("Enter the string \n");
    scanf("%s", strn);
    printf("Enter the string character by character\n");
    while(c!='\n')
    {   fflush(stdin);
        scanf("%c", &c);
        str[i] = c;
        i++;
    }
    str[i-1] = '\0';
    printf("%s", str);
}