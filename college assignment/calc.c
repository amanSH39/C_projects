#include <stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter symbol = ");        
    scanf("%c", &ch);           
    printf("Enter 2 number\n");
    scanf("%d %d", &a, &b);
    
    switch(ch)
    {
        case '+':
        {
            printf("Add = %d", a+b);
            break;
        }
        case '-':
        {
            printf("Subs = %d", a-b);
            break;
        }
        case '*':
        {
            printf("Multiply = %d", a*b);
            break;
        }
        case '/':
        {
            printf("Divide = %d", a/b);
            break;
        }
        default :
        {
            printf("Enter valid symbol");
        }
    }
}