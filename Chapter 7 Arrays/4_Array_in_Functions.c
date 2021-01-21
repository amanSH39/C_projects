#include<stdio.h>
void display(int *ptr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("The value of %d element is %d\n", i+1, *(ptr+i));
    }
}
int main()
{
    int x;
    printf("Enter the number of elements you want array to have\n");
    scanf("%d", &x);
    int marks[x];
    for(int i=0; i<x; i++)
    {
        printf("Enter the element no %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    display(marks, x);
}