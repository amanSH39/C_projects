#include<stdio.h>
int main()
{
    int n = 0;
    int i = 2;
    int temp = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    while(i<n)
    {
        
        if(n%i ==0) {
            temp = 0;
            break;
        }
        i++;
    }
    if (temp ==0 && n!=2) {
        printf("Not a prime number");
    }
    else {
        printf("Its a prime number");
    }
    return 0;
}