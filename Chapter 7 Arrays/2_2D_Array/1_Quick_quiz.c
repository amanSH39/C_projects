#include<stdio.h>
// void display(int n, int m, int marks)
// {   int i,j,row, col;
    
    
// }
int main()
{   
    int row, col,i,j;
    
    printf("Enter the number of rows\n");
    scanf("%d", &row);
    printf("Enter the number of columns\n");
    scanf("%d", &col);
    int marks[row][col];
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter the value of row %d and column %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("The value of row  %d and column  %d is %u\n", i+1,j+1 , marks[i][j]);
           
        }
    }
    // display(row, col, marks);
}