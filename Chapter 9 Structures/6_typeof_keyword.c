#include<stdio.h>
#include<string.h>
typedef struct employee 
    {
        int code;
        float salary;
        char name[10];
    } nig;

int main()
{
     nig peel = {34,656.43, "Henlo"};
     nig *ptr; 
     *ptr = peel;
     printf(" Code: %d\n salary: %f\n Name: %s\n", ptr->code, ptr->salary, ptr->name);
}