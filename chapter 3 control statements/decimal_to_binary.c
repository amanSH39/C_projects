#include <stdio.h>
int main()
{
    int n;
    printf("Enter Decimal Number\n");
    scanf("%d", &n);
    int rem, temp=1;
    int rev=0;
    while(n!=0)
    {
        rem=n%2;
        printf("rem=%d\n",rem);
        n=n/2;
        rev=rev+rem*temp;
        temp=temp*10;
    }
    printf("Binary is=%d", rev);
}