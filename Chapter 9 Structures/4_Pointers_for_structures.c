#include<stdio.h>
#include<string.h>
struct employee 
    {
        int code;
        float salary;
        char name[10];
    };
int main()
{
    struct employee e1 = {121, 234.67, "Nigga"};
    struct employee *ptr;
    ptr = &e1;
     printf("%d\n", (*ptr).code);
    ptr->code = 101;
    printf("%d\n", ptr->code);
   

}