#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the number of rows \n");
    scanf("%d", &j);
    for(k=1; k<=j; k++)
    {
        for(i=1; i<=k; i++)
        {
            printf("*" );
        }
        printf("\n");
    }
    return 0;
}