#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("2_Table.txt", "w");
    int t;
    printf("Enter the number you want table of: ");
    scanf("%d", &t);
    for(int i=1; i<=10; i++)
    {
        fprintf(ptr, "%dX%d = %d\n", t, i, t*i);
    }
    fclose(ptr);
}