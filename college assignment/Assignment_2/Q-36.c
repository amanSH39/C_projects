#include <stdio.h>
int main()
{
    int a;
    printf("Enter the percentage of marks scored\n");
    scanf("%d", &a);
    if (a >=75 && a<=100) printf("Distinction");
    else if (a >=60 && a<75) printf("First Division");
    else if (a >=50 && a<60 ) printf("Second Division");
    else if (a >=40 && a<50) printf("Third Division");
    else if (a>= 33 && a<40) printf("You passed");
    else if (a>0 && a<33) printf("You failed");
    else printf("Dont play with this");
    return 0;
}