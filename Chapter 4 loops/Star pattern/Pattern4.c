#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the no. of rows\n");
    scanf("%d", &n);
    int l = 0;
    for(i=n; i>=1; i--)
    {   for(k=0; k<l; k++) printf(" ");
        for(j=i; j>=1; j--)
        {   
            printf("*");
        }
        printf("\n");
        l++;
    }
}