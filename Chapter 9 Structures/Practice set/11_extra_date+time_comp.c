#include<stdio.h>
typedef struct timestamp{
    int date;
    int month; 
    int year;

    int hour;
    int min; 
    int sec;
} stamp;
int comp(stamp x1,stamp x2)
{
    if(x1.year>x2.year) 
    {
        return 1;
    }
    if(x1.year<x2.year) 
    {
        return -1;
    }
    if(x1.month>x2.month)
    {
        return 1;
    }
    if(x1.month<x2.month)
    {
        return -1;
    }
    if(x1.date>x2.date)
    {
        return 1;
    }
    if(x1.date<x2.date)
    {
        return -1;
    }
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
    stamp s1 = {20, 7, 2020, 10, 40, 33};
    stamp s2 = {20, 7, 2020, 10, 40, 33};
   printf("%d", comp(s1, s2));
}