#include<stdio.h>
int occur(char *str, char c)
{   int count = 0;
    while(*str != '\0')
    {   int d = *str;
        if(c == d) {count++;}
        str++;
    }
    printf("%d", count);
}
int main()
{
    int c;
    char string;
    printf("Enter the character you wish to check\n");
    scanf("%c", &c);
    char str[] = "Slayer is a good boi";
    occur(str, c);
}