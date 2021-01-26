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
    struct employee harry = {121, 234.67, "Nigga"};
    printf(" %d\n %.2f\n %s\n", harry.code, harry.salary, harry.name);
}