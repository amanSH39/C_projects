#include<stdio.h>
void encrypt(char *str)
{  char *ptr = str;
    while(*ptr !='\0')
    {
        *ptr = *ptr + 1;
         ptr++;
    }
   
}
int main()
{
    char str[] = "This is my string";
    encrypt(str);
    printf("%s", str);
    
}