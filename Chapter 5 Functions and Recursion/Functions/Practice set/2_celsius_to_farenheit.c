#include<stdio.h>
float convert(float x);
int main()
{
    int c;
    printf("Enter the temp in celsius\n");
    scanf("%d", &c);
    printf("The temp in farenheit is %f", convert(c));
}
float convert(float x)
{
  float result;
  result = (x*1.8)+32;
  return result;
}
