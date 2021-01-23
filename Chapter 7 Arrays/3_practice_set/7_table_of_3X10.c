#include<stdio.h>
int mul(int *ptr)
{  
    for(int i=0; i<10; i++)
    {
        printf(" %d ,", ptr[i]);
    }
    printf("\n");
    for(int i=10; i<20; i++)
    {
        printf(" %d ,", ptr[i]);
    }
    printf("\n");
    for(int i=20; i<30; i++)
    {
        printf(" %d ,", ptr[i]);
    }
}
int main()
{
    int table[3][10];
    
        for(int j=0; j<10; j++)
        {
            table[0][j] = (j+1)*2;
        }
        
        for(int j=0; j<10; j++)
        {
            table[1][j] = (j+1)*7;
        }
        
        for(int j=0; j<10; j++)
        {
            table[2][j] = (j+1)*9;
        }
        
mul(*table);

}