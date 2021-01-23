#include<stdio.h>
int find(int *ptr)
{   int count=0;
    for(int i=0; i<9; i++)
    {
        if(ptr[i]>0)
        {
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int list[] = {34,-45,67,-567,-46,35,89,-456,56};
    find(list);
}