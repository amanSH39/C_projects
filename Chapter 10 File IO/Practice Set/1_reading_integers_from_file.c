#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("1_integers.txt", "r");
    int j;
    
    
    for(int i =0; i<3; i++)
    {
         fscanf(ptr, "%d", &j);
         printf("%d\n", j);
        
    }
    return 0;
}