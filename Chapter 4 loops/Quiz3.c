#include<stdio.h>
int main()
{
    int i = 0;
    int n;
    printf("Enter the limit which you wanna print upto\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("The number is %d\n", i);
    }
    return 0;
}