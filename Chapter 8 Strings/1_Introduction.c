#include<stdio.h>
int main()
{
    char str[] = {'S', 'l', 'a', 'y', 'e', 'r'};
    char string[] = "Aman";
    char *ptr = string;
    char *ctr = str;
   
   
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    // for(int i=0; i<4; i++)
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    printf("\n");
    
    while(*ctr != '\0')
    {
        printf("%c", *ctr);
        ctr++;
    }
}