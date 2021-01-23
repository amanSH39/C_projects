#include<stdio.h>
int mul(int *ptr, int x, int y, int z)
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
    int a,b,c;
    printf("Enter the value of number 1 of which you want table of : ");
    scanf("%d", &a);
    printf("Enter the value of number 1 of which you want table of : ");
    scanf("%d", &b);
    printf("Enter the value of number 1 of which you want table of : ");
    scanf("%d", &c);
    
    
        for(int j=0; j<10; j++)
        {
            table[0][j] = (j+1)*a;
        }
        
        
        for(int j=0; j<10; j++)
        {
            table[1][j] = (j+1)*b;
        }
        
        for(int j=0; j<10; j++)
        {
            table[2][j] = (j+1)*c;
        }
        
        
    
    mul(*table, a, b, c);

}