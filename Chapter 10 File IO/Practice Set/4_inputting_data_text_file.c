#include<stdio.h>
#include<string.h>
int main()
{
    FILE *rtr;
    rtr = fopen("4_new.txt", "w");
    char name[20], name2[20];
    int s1, s2;
    printf("Enter the name : ");
    gets(name);
    printf("Enter the salary : ");
    scanf("%d", &s1);
    // fflush;
    printf("Enter the name : ");
    scanf("%s", &name2);
    printf("Enter the salary : ");
    scanf("%d", &s2);
  
    fprintf(rtr, " %s, %d \n %s, %d", name, s1, name2, s2);
    fclose(rtr);
}