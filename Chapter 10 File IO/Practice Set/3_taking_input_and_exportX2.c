#include<stdio.h>
int main()
{
    FILE *rtr;
    rtr = fopen("3_input.txt", "r");
    FILE *ptr;
    ptr = fopen("3_export.txt", "w");
    char c;
    
    while(c!= EOF)
        {
        c = fgetc(rtr);
        fputc(c, ptr);
        
        }
        
    
    while(c!= EOF)
        {
        c = fgetc(rtr);
        fputc(c, ptr);
        
        }
    fcloseall;
}