#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the no. of rows\n");
    scanf("%d", &n);
    int l=n;
    for(i=1; i<=n; i++)
    {
        for(j=l; j>=1; j--) printf(" ");
        for(k=1; k<=i; k++) printf("*");
        l--;
         printf("\n");
    }
   
    return 0;

}
