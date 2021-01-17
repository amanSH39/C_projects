#include<stdio.h>
int fab(int n)
{
    if (n ==1 || n ==2)
    return 1;
    
        return (fab(n-1)+fab(n-2));

}
int main()
{   int n,i;
    printf("Enter the position upto which you wish print fab upto\n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    printf("%d\n", fab(i));
    return 0;

}