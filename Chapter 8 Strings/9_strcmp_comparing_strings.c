#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Heilo";
    char *ptr = "Henlo";
    int comp = strcmp(str, ptr);
    printf("The result is %d", comp);
}