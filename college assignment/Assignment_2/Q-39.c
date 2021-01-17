#include <stdio.h>
int main()
{   char c;
    printf("Enter the initial of color of spectrum\n");
    scanf("%c", &c);
    if (c == 'v' || c == 'V') printf("Voilet");
    else if (c == 'b' || c == 'B') printf("Blue");
    else if (c == 'g' || c == 'G') printf("Green");
    else if (c == 'i' || c == 'I') printf("Indigo");
    else if (c == 'o' || c == 'O') printf("Orange");
    else if (c == 'y' || c == 'Y') printf("Yellow");
    else if (c == 'r' || c == 'R') printf("Red");
    else printf("Invalid input");

}