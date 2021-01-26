#include<stdio.h>
#include<string.h>
struct employee
{
        int code;
        float salary;
        char name[10];
};
void show(struct employee e1)
{
    printf("The code is : %d\n", e1.code);
    printf("The salary is : %.2f\n", e1.salary);
    printf("The name is : %s\n", e1.name);
}

int main()
{
    struct employee nig;
    struct employee *ptr;
    ptr = &nig;
    ptr->code = 450;
    ptr->salary = 234.54;
    strcpy((*ptr).name, "HArry");
    show(nig);
}