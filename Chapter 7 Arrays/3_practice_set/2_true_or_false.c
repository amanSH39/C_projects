// in s[3] *(s+3) will refer to 3rd element ? 
// ans false
#include<stdio.h>
int main()
{
    int s[3] = {34,43,56};
    printf("%d", *(s+3));// s+3 basically prints garbage value 
}