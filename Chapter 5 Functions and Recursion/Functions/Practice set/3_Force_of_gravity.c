#include<stdio.h>
float force(float);
int main()
{
    int m;
    printf("Enter the mass of the body\n");
    scanf("%d", &m);
    printf("The force acting on the body is %f", force(m));
}
float force(float m1)
{
    float f;
    f = 9.8*m1;
    return f;
}