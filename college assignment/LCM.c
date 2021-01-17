#include<stdio.h>
int main()
{
    int a,b,j=1,k=1,i=1;
    printf("Enter the first number \n");
    scanf("%d", &a);
     printf("Enter the second number \n");
    scanf("%d", &b);
    while (i<a && i<b) {
        i++;
        if(a%i ==0 && b%i ==0) {
            
            j = j*(a/i);
        }
        else {
            k = (a%i)*(b%i)*j;
        }
    }
    printf("LCM is %d", k);
    return 0;

}
