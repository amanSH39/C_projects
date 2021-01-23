#include<stdio.h>
int main()
{
    int marks[10] = {24,5,65,45,34,67,78,45,334,56};
    int *ptr = marks;
    printf("the value at the base index is %d\n", *ptr);
    ptr+=2;
    printf("the value at the base index is %d\n", *ptr);
    if(ptr == &marks[2])
    {
        printf("They point to same location in memory\n");
    }
    else
    {
        printf("They do not point to same location in memory\n");
        
    }

}