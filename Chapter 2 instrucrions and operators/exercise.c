#include <stdio.h>
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    if (num% 90 == 0)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }
}