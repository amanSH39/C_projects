#include<stdio.h>

int main()
{   int sub1;
    printf("Enter the marks of sub1 \n");
    scanf("%d", &sub1);
    int sub2;
    printf("Enter the marks of sub2 \n");
    scanf("%d", &sub2);
    int sub3;
    printf("Enter the marks of sub3 \n");
    scanf("%d", &sub3);
    if (sub1 >=33 && sub2 >=33 && sub3 >=33)
    {
      if ((sub1 + sub2 + sub3)/3 > 40)
      {
        printf("you passed"); 
      }
      else {
          printf("You failed");
      }
      }
     else {
       printf("you failed");
   }
   return 0;
}