#include<stdio.h>
typedef struct date{
    int year;
    int month; 
    int date;
} date;
int comp(date x1, date x2)
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
    else
    {
        return 0;
    }
}
int main()
{
    date d1;
    d1.year = 2020;
    d1.month = 10;
    d1.date = 25;
    date d2;
    d2.year = 2020;
    d2.month = 10;
    d2.date = 26;
   int result =  comp(d1, d2);
   printf("%d", result);
}