#include <stdio.h>
#include <conio.h>
int main()
{    int a;
    printf("enter the year \n");
    scanf("%d", &a);
    
    if (a < 1900)
    {
        printf("nikal lavde phehli fursat me nikal");
    
    }
    else if (a %4 == 0)
    {
        printf("yes");
    }
    else 
        printf("NO");


}