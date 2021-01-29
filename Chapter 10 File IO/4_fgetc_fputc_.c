#include<stdio.h>
int main()
{
    FILE *rtr;
    rtr = fopen("EOF.txt", "r");
    FILE *ptr;
    ptr = fopen("putc.txt", "w");
    char c;
    while(c!= EOF)
    {
        c = fgetc(rtr);
        printf("%c", c);
        fputc(c, ptr);
    }
    return 0;
}