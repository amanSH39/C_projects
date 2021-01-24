#include<stdio.h>
int main()
{
    char *ptr = "This string is based on pointer";
    printf("%s\n", ptr);
    ptr = "This string is now changed";
    printf("%s\n", ptr);
    // String declared with pointer can be reinitiallised unlike string declared with array 
    // char str[] = "This string is based on array";
    // str = "This can't be changed";
}