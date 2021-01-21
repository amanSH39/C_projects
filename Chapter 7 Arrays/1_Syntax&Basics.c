#include<stdio.h>
int main()
{   int i;
    int marks[5];
    printf("Enter the marks\n");
    for(i=0; i<5; i++)  
    {
        scanf("%d", &marks[i]);
        
    }
    for(i=0; i<5; i++) 
    {
        printf("The number of roll no. %d is %d\n",i, marks[i]);
    }
    return 0;
}