#include<stdio.h>
int table(int *mtable, int n)
{
    for(int i = 0; i<10; i++ )
    {
        printf("%dX%d = %d\n", n, i+1, n*(i+1));
    }
    printf("***************************************************\n\n");
}
int main()
{
    int mtable[3][10];
    int a = 2,b = 7, c = 9;
    table(mtable[0], a);
    table(mtable[1], b);
    table(mtable[2], c);

}