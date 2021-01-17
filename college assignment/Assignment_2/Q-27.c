#include <stdio.h>
int main ()
{
    int a,j=1,i,r=0;
    printf("Enter the number\n");
    scanf("%d", &a);
    int b = a;
    while (a>=1) 
    {   j=10;
        i = a%j;
        
      
        r = r + i*i*i;
          a = a/10;
    }
    if (r == b) printf("yes");
    else printf("no"); 
    return 0;
}