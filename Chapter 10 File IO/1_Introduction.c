#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r");
    int c;
    fscanf(ptr, "%d", &c);
    fclose(ptr);
    printf("%d\n", c);
    
    FILE *str;
    str = fopen("new.txt", "w");
    int n = 45;
    fprintf(str, "%d", n);
    printf("%d", n);
}