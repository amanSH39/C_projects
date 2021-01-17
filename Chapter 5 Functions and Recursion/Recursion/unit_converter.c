#include<stdio.h>
int main() 
{   
    int num;
    float input;
    
   
    while(num != 0) 
    {   printf("\n Welcome to the Unit converter\n enter 0 to exit else\n 1. for miles to km\n 2. for inches to foot\n 3. for cm to inches\n 4. for pound to kg\n 5. inches to meter\n ");
    scanf("%d", &num);
        switch (num) 
        {   case 0: break;
            case 1: printf("You have selected km to miles converter enter the value in km\n");
            scanf("%f", &input);
            printf("Miles should be %f as per my calculations\n", input*0.621);
            break;
            case 2:  printf("You have selected inches to foot converter enter the value in inches\n");
            scanf("%f", &input);
            printf("Foot should be %f as per my calculations\n", input*0.0833);
            break;
            case 3:  printf("You have selected cm to inches converter enter the value in cm\n");
            scanf("%f", &input);
            printf("Inches should be %f as per my calculations\n", input*0.3937);
            break;
            case 4: printf("You have selected pound to kg converter enter the value in pound\n");
            scanf("%f", &input);
            printf("Kg should be %f as per my calculations\n", input*0.453);
            break;
            case 5: printf("You have selected inches to meter converter enter the value in inches\n");
            scanf("%f", &input);
            printf("Meter should be %f as per my calculations\n", input*0.0254);
            break;
           
            default : printf("Behave nigga stop playing with me\n");
            break;
        }
    }
    return 0;
}