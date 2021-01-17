#include<stdio.h>
int main()
{   int n,i,j,k;
    printf("Enter the number of rows you wish to print\n");
    scanf("%d", &n);
   for(i=n; i>=1; i--) {
   
       for (j=1; j<=i; j++) {
          if (i==n|| i==1) printf(" * ");
          else {
              if(j==1 || j==i) printf(" * ");
              else printf("   ");
          }
           }
       printf("\n");
   }
    return 0;
} 