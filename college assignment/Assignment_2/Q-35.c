#include <stdio.h>
int main()
{
    int a,b=0,i=1,j;
    printf("Enter how much numbers you wish to compare\n");
    scanf("%d", &i);
    printf("Enter the numbers\n");
    
    for (j =1; j<=i; j++) {
        printf("");
        scanf("%d", &a);
        if (a>b) {
            b = a;
           
        }
        
    }
    printf("The max value is %d", b);
    return 0;

}