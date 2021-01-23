#include<stdio.h>
int rev(int *ptr)
{   
    int numc[8];
    int j =7;
  
    for(int i=0; i<8; i++)
    {  
        numc[j] = ptr[i];
        j--;    
    }
   
    for(int k=0; k<8; k++)
    {
        printf("The array is %d\n", numc[k]);
    }
}

int main()
{
    int num[8] = {234,56,234,76,34,254,45,6};
    rev(num);
}
// more accurate solution in alternate solution folder