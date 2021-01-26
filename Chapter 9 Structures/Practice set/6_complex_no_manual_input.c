#include<stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
}comp;
void display(comp c)
{   
    printf("The real value of c is %d\n", c.real);
    printf("The imaginary value of c is %d\n", c.imaginary);
    
}
int main()
{   
    comp nums[5];
    for(int i=1; i<6; i++)
    {   
        printf("Enter the real value of of c%d \n",i);
        scanf("%d", &nums[i].real);
        printf("Enter the imaginary value of of c%d \n",i);
        scanf("%d", &nums[i].imaginary);
        
    }
    
    for(int i=1; i<6; i++)
    {
        display(nums[i]);
    }
    return 0;
}
