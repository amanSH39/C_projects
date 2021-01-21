#include<stdio.h>
void sa(int a, int b, int *sum, float *avg);
int main()
{
    int x,y,sum;
    float avg;
    printf("Enter the first number\n");
    scanf("%d", &x);
    printf("Enter the second number\n");
    scanf("%d", &y);
    sa(x,y,&sum,&avg);
    printf("The sum is %d\n", sum);
    printf("The avg is %f", avg);

}
void sa(int a, int b, int *sum, float *avg)
{
    *sum = a+b;
    *avg = (float)(*sum)/2;
}