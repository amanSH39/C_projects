#include<stdio.h>
#include<string.h>
typedef struct vector
{
    int x;
    int y;
} vect;

int main()
{
   vect v1;
    v1.x = 3;
    v1.y = 4;

    vect v2;
    v2.x = 7;
    v2.y = 9;

    printf("The X component of v1 is %d\n", v1.x);
    printf("The y component of v1 is %d\n", v1.y);
    printf("The X component of v2 is %d\n", v2.x);
    printf("The y component of v2 is %d\n", v2.y);

}