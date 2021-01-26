#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};
int main()
{
    struct complex n1; 
    
        n1.real = 45;
        n1.imaginary = 50;
    printf("The real value of n1 is %d\n", n1.real);
    printf("The imaginary value of n1 is %d\n", n1.imaginary);

}