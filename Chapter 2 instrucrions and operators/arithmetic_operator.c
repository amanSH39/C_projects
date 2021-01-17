#include <stdio.h>
#include <math.h>
int main()
{
    int a = 3, b =7;

    // a + b = z; (this is wrong as a + b  = z mean assign value of a+b to z which  doesnt make sense )

int z;
z = a + b;
printf("the value of z is %d \n", z);
printf("the exponential numbers are calculated by %f \n", pow(2, 6));
printf("the value of sin30 is %f \n", sin(300));
// for exponential and sin cos function math.h library is used
return 0;
}