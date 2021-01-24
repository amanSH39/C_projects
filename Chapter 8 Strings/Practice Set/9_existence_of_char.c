#include<stdio.h>
int occur(char *str, char c)
{   int count = 0;
    while(*str != '\0')
     {   //int d = *str;
        if(c == *str) 
        {
            printf("Character found");
            count++;
            break;
        }
        str++;
    }
    if(count == 0) printf("Character not found");
}
int main()
{
    int c;
    char string;
    printf("Enter the character you wish to check\n");
    scanf("%c", &c);
    char str[] = "aman is a good boi";
    occur(str, c);
}