#include<stdio.h>
int table(int *mtable, int n, int m)
{
    for(int i = 0; i<m; i++ )
    {
        printf("%dX%d = %d\n", n, i+1, n*(i+1));
    }
    printf("***************************************************\n\n");
}
int main()
{   int m, a, b, c, n;
    printf("Enter the limit upto which you want table upto\n");
    scanf("%d", &m);
    printf("Enter the how many tables you want\n");
    scanf("%d", &n);
    int mtable[n][m];
    // printf("Enter the number of which you want table of\n");
    // scanf("%d %d %d", &a, &b, &c);
    // table(mtable[0], a, m);
    // table(mtable[1], b, m);
    // table(mtable[2], c, m);
    for(int i=0; i<n; i++)
    {
        printf("Enter the number of which you want table of\n");
        scanf("%d", &a);
        table(mtable[i], a, m);
    }
    return 0;
}