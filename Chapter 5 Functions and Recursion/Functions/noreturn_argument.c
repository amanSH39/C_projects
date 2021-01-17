#include<stdio.h>
int star(int);
int main()
{   int a;
    printf("Enter the number \n");
    scanf("%d", &a);
    printf("Your pattern is here\n");
    star(a);
}
int star(int x)
{
    int i=0;
    while (i<x) {
        printf("*\n**\n***\n");
        i++;}
    
}