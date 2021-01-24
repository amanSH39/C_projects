#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr = "This is my string";
    char str[39] = "hello";
    strcpy(str, ptr);
    printf("The copy of string is : %s", str);
}