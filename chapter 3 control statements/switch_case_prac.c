#include<stdio.h>
int  main()
{
    int marks;
    printf("Enter the marks %d \n");
    scanf("%d", &marks);
    switch(marks)
    {
        case 90:
        printf("your grade is A\n");
        break;
         case 80:
        printf("your grade is B\n");
        break;
        case 70:
        printf("your grade is C\n");
        break;
        case 60:
        printf("your grade is D\n");
        break;
        case60:
         printf("your grade is F\n");
        break;
       
        
    }
}