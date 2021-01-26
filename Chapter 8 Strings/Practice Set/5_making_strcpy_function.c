#include<stdio.h>
char strcopy(char *str, char *ctr)
{
    while(*str != '\0')
    {
        *ctr = *str;
        ctr++;
        str++;
    }
}
int main()
{
    char str[] = "This is what to be copied";
    char ctr[30];
    strcopy(str, ctr);
    printf("%s", ctr);
}