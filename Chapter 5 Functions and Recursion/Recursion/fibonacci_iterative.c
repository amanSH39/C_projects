#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=1;
    printf("fibonacci starting with %d and %d\n", a,b);
    while(i<10) 
    {
        
        c = a+b;
        printf("%d\n", c);
        a=b;
        b=c;
        i++;
    }
    return 0;

}