#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("2write.txt", "w");
    char c = 'A';
    putc('A', ptr);
    FILE *str; 
    str = fopen("nig", "r");
    printf("%s", str);
}