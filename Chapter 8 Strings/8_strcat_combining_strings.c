#include<stdio.h>
#include<string.h>
int main()
{
    char ptr[40] =  "My name is ";
    char *str = "Aman";
    strcat(ptr, str);
    printf("%s", ptr);
}