#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("Enter String\n");
    gets(s);
    strrev(s);
    printf("Inverse string is = %s", s);
}