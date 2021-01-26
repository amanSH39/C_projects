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
    struct employee netflix[100];
    netflix[0].code = 123;
    netflix[0].salary = 1123.45;
    strcpy(netflix[0].name, "harry");

    netflix[1].code = 103;
    netflix[1].salary = 123.456;
    strcpy(netflix[1].name, "Nigga");

    netflix[2].code = 100;
    netflix[2].salary = 112.46;
    strcpy(netflix[2].name, "Peel");

    printf(" %d\n %.3f\n %s\n", netflix[2].code, netflix[2].salary, netflix[2].name);
}