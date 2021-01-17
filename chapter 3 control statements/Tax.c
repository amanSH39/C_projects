#include<stdio.h>
int main()
{   int inc;
    printf("Enter the yearly income in lakhs\n");
    scanf("%d", &inc);
    if (inc >= 10) {
        printf("you have to pay 20 percent tax");
    }
    else if (inc < 10 && inc >=5 ) {
        printf("you will have to pay 10 percent tax \n");
    }
    else if (inc < 5 && inc >= 2) {
        printf("you will have to pay 5 percent tax");
    }
    else {
        printf("you don't need to pay any tax \n");
    }
    return 0;
}