#include <stdio.h>
int main()
{
    int a,b,r=1,i=1;
    printf("Enter the number \n");
    scanf("%d", &a);
    printf("Enter the power \n");
    scanf("%d", &b);
    if (b==0) printf("The result is 1");
    else {
    while(i<=b) {
         i++;
        r = r*a;
        
      
    }
    printf("The result is %d", r);
    }
    return 0;
}