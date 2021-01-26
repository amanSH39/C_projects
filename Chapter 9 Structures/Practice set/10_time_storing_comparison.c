#include<stdio.h>
typedef struct time
{
    int hour;
    int min;
    int sec;
} time;
int comp(time x1, time x2)
{
    if(x1.hour>x2.hour)
    {
        return 1;
    }
    if(x1.hour<x2.hour)
    {
        return -1;
    }
    if(x1.min>x2.min)
    {
        return 1;
    }
    if(x1.min<x2.min)
    {
        return -1;
    }
    if(x1.sec>x2.sec)
    {
        return 1;
    }
    if(x1.sec<x2.sec)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    time t1 = {10,45,40};
    
    time t2 = {10,30,55};
   
    printf("%d", comp(t1, t2));
}