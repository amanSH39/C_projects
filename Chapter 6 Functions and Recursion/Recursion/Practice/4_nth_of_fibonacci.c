#include<stdio.h>
int fab(int);
int main()
{
    int n;
    printf("Enter the term\n");
    scanf("%d", &n);
    printf("The nth element is %d", fab(n));
}
int fab(int x)
{
    if(x==1 || x ==2)
    {
        return 1;
    }
    else 
    {
        return (fab(x-1)+ fab(x-2));
    }
}