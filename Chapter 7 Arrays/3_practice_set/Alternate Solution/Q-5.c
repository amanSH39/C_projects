#include<stdio.h>
int reverse(int *arr, int x)
{
    for(int i=0; i<(x/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[x-i-1];
        arr[x-i-1] = temp;
    }
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr, 7);
    for(int i=0; i<7; i++)
    {
        printf("%d\n", arr[i]);
    }
}