#include<stdio.h>
int sum(int x);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The sum is %d", sum(n));

}
int sum(int x)
{
    if (x==1) 
    {
        return 1;
    }
    else 
    {
        return x + sum(x-1);
    }
}