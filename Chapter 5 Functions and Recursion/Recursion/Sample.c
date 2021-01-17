#include<stdio.h>
int recur(int numb)
{
    if(numb==0 || numb==1){
    return 1 &&
    printf("Reached to one\n");
    }
    else {
    return (numb*recur(numb-1)&& (printf("came to %d\n", numb)));
    
    }
}
int main()
{   int num,c;
    printf("Enter the number \n");
    scanf("%d", &num);
    c=recur(num);
    printf("The factorial of number %d", c);
    return 0;
}