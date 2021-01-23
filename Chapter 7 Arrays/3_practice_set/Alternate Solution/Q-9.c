#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter the dimension of 3d array\n");
    scanf("%d %d %d", &a, &b, &c);
    int new[a][b][c];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                printf("The address of %d %d %d is : %u \n", i,j,k, &new[i][j][k]);
            }
        }
    }
}