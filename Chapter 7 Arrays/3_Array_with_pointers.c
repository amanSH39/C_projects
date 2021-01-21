#include<stdio.h>
int main()
{   int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr ;
    for(int i =0; i<n; i++)
    {
        printf("Enter the values of element %d\n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int j=0; j<n; j++)
    {
    printf("The element %d has the value %d\n",j+1 ,arr[j]);
    }
}