#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("5_NO.txt", "r");
    int a;
    fscanf(ptr, "%d", &a);
    fclose(ptr);
    FILE *rtr;
    rtr = fopen("5_NO.txt", "w");
    fprintf(ptr, "%d", a*2);
}