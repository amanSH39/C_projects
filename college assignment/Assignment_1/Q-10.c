#include <stdio.h>
#include <conio.h>
int main()
{    int a;
    printf("enter the year \n");
    scanf("%d", &a);
      
    if (a%100!=0 && a%4==0)
    {
        printf("yes");
    }
    else 
        printf("NO");


}