#include <stdio.h>
int main ()
{
    int a,b,i=1,j=1,r=1;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);

    while (i<a&&i<b) {
        i++;
        while (a%i ==0 && b%i==0) {
            
            a = a/i;
            b = b/i;
            j = j*i;
        }
        
    }
        r = j*a*b;
        printf("The LCM is %d", r);
        return 0;
}
