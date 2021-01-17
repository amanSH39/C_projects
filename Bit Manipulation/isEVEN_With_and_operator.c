#include <stdio.h>
int isEVEN(int x);
int main()
{
    int a;
    printf("Enter the no. you wish to check\n");
    scanf("%d", &a);
    return isEVEN(a);
    
}
int isEVEN(int x)
{
    if((x&1) ==0) 
    {
        printf("The number is EVEN");
    }
    else {
        printf("The number is ODD");
    }
}