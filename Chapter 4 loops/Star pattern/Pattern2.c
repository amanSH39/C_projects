#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows\n");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++) 
        {
            if (i==n|| i==1) printf(" * ");
            else 
            {
                if(j==1||j==i) printf(" * ");
                else printf("   ");
            }
        }
         printf("\n");
    }
   
}
getch();