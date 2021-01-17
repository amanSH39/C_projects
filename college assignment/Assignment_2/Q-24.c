#include <stdio.h>
int main()
{    int a,i=1,j=1;
     printf("Enter the number \n");
    scanf("%d", &a);
    while(a>=1){
    j*=10;
    i =a%10;
    a = a/10;
    printf("%d",i);
    }
   
}