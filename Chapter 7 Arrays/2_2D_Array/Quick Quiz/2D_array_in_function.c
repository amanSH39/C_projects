#include<stdio.h>
void display(int r, int c, int *m )
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            // printf("The value of element in row %d and column %d is ", i+1, j+1);
            printf("%u, ", m[i+j]);
        }
        printf("\n");
    }
}
int main()
{
    int row, col;
    printf("Enter the number of rows\n");
    scanf("%d", &row);
    printf("Enter the number of columns\n");
    scanf("%d", &col);
    int marks[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Enter the value of element row %d and column %d :\n", i+1, j+1 );
            scanf("%d", &marks[i][j]);
        }
    }
    display(row, col, *marks);
}