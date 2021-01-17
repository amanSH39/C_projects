#include <stdio.h>
int main()
{
    char c;
    printf("Enter Name\n");
    for(int i=0; i<1000; i++)
    {
        scanf("%c", &c);
        if(c=='*')
        {
            goto end;
        }
        
    }
    end :
     printf("End");
}