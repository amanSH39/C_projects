#include <stdio.h>
int main()
{
    int n;
    printf("Enter Decimal Number\n");
    scanf("%d", &n);
    int rem;
    int rev=0;
    int d, temp=1;
    int i=0;

    while(n!=0)
    {
        rem=n%16;
        if(rem<10)
        {
            rev=48+rem;
        }
        else
        {
            rev=55+rem;
        }
        
        n=n/16;
        printf("Number=%c", rev);
        
    }
        
}