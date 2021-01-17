#include<stdio.h>
int main()
{
    int n;
    int i =0;
    printf("Enter the number you want the table of\n");
    scanf("%d", &n);
    while( i<10) {
        i++;
        printf("\n%d", i*n);
    }
    return 0;
}