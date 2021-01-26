#include<stdio.h>
#include<string.h>
typedef struct vector
{
    int x;
    int y;
} vect;

vect addition(vect v1, vect v2)
{
    vect v3;
    v3.x = v1.x+v2.x;
    v3.y = v1.y+v2.y;
    return v3;
    
}
int main()
{
    vect v1;
    v1.x = 34;
    v1.y = 23;
    vect v2;
    v2.x = 67;
    v2.y = 34;
    vect v3 = addition(v1, v2);
    printf("X component is %d\n", v3.x);
    printf("Y component is %d\n", v3.y);
}