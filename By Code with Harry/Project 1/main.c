#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));
    // Generate a random number betwn 1 & 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guess;
    // Print the random number
    // printf(" Random Number: %d\n", randomNumber);
    do
    {
        printf("Guess the number:");
        scanf("%d", &guess);
        no_of_guesses++;
        if (guess < randomNumber)
        {
            printf("Lower no please\n");
        }
        else
        {
            printf("Higher no please\n");
        }
    } while (guess != randomNumber);
    printf("You guessed the number in %d guesses\n", no_of_guesses);
    return 0;
}
