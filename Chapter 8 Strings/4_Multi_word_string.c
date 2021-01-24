#include<stdio.h>
int main()
{
    char str[39];
    printf("Enter your multiword string : ");
    gets(str); // can fetch multi word string string from user unlike scanf 
    puts(str); // print string and puts cursor in next line 
    printf("%s", str);
}