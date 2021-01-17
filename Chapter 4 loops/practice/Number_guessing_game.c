#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
int main()
{
    int number, guess, guesses =1;
    srand(time(0));
    number = rand()%100 + 1;
     
    do {
        printf("guess the number \n");
        scanf("%d", &guess);
       
        if (guess>number)
        {
            printf("the number is too high\n");
        }
        else if (guess <number)
        {
            printf("the number is too low\n");
        }
        guesses++;
    } while (guess != number);
    if (guess = number) {
           printf("you guessed in %d attempts ", guesses);
    }
    return 0;
                 
}