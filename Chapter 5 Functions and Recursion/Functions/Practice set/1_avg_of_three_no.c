#include<stdio.h>
float avg(int x, int y, int z);
int main()
{
    int a,b,c;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Enter the third number\n");
    scanf("%d", &c);
    printf("The avg is %f", avg(a,b,c));
}
float avg(int x, int y, int z)
{   float result;
    result = (float)(x+y+z)/3;
    return result;
}