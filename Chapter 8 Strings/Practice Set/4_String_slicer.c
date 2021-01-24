#include<stdio.h>
void slicer(char *str, int m, int n)
{
    int i =0;
    while(m+i<n)
    {
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[]= "Slayer";
    slicer(str, 1, 5);
    printf("%s", str);
    return 0;
}