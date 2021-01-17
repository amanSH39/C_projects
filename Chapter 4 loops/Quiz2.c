#include<stdio.h>
int main()
{ int n;
int i =0;
  printf("Enter the numbers you wish to print\n");
  scanf("%d", & n);

  do {
      i++;
      printf("%d\n", i);

  } while(i<n);
  return 0;
}