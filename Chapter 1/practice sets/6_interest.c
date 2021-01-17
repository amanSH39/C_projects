#include <stdio.h>

int main()
{
    int year = 1, rate = 4, principle = 100;

    int interest = (year*rate*principle)/100;
    printf("the interest to be paid is %d", interest );
    return 0;


}