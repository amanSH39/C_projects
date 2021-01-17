#include<stdio.h>
int main()
{   int total = 0;
    int i = 0;
    do {
        i++;
        total+=i;
         
    } while(i<10);
    printf("Total is %d\n", total);
    return 0;
}