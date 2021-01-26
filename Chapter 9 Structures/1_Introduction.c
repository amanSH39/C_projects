#include<stdio.h>
#include<string.h>
int main()
{
    struct employee 
    {
        int code;
        float salary;
        char name[10];
    };
    struct employee e1;
    
        e1.code = 121;
        e1.salary = 456.89;
        strcpy(e1.name, "Slayer");
    
    struct employee e2;
    
        e2.code = 101;
        e2.salary = 454.89;
        strcpy(e2.name, "Billo");
    
    struct employee e3;
    
        e3.code = 98;
        e3.salary = 400.89;
        strcpy(e3.name, "Rikit");
    
    printf("Code: %d\nSalary: %f\nName: %s\n", e1.code, e1.salary, e1.name);
    printf("Code: %d\nSalary: %f\nName: %s\n", e2.code, e2.salary, e2.name);
    printf("Code: %d\nSalary: %f\nName: %s\n", e3.code, e3.salary, e3.name);
    printf("%d\n", e2.code);
    printf("%d\n", e3.code);
    
}