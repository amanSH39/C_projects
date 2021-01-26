#include<stdio.h>
#include<string.h>
struct arrow
{
    int x;
    float y;
};
int main()
{
    struct arrow c;
    struct arrow *ptr;
    ptr = &c;
    ptr->x = 45;
    ptr->y = 78.34;
    printf("The vlaue of x is %d\n", ptr->x);
    printf("The vlaue of y is %.2f\n", ptr->y);
}