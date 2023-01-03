#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for random number generator

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int maxGuesses = 5;
    time_t t;

    //initialise random number generator by passing it time
    srand((unsigned) time(&t));

    //get the random number
    randomNumber = rand() % 21; //makes sure its between 0-20

    printf("\nIt's time to play a game you egg.");
    printf("\nGuess a number between 0-20. You have 5 tries.\n");

    for(;maxGuesses > 0;--maxGuesses)
    {
        printf("\nYou have %d tr%s left. Enter a guess:",maxGuesses, maxGuesses == 1 ? "y" : "ies" );//fixes grammar based on number of guesses left using ternary operator
        scanf("%i",&guess);

        if(guess==randomNumber)
        {
            printf("\nHe's right. It's %d\n",guess);
            break;
        }
        else if (guess < 0 || guess > 20)
            printf("\nGuess a number between 0-20 you donut");
         else if (guess < randomNumber)
            printf("\nPick a higher number.");
         else if (guess > randomNumber)
            printf("\nPick a lower number.");
    }

    if(maxGuesses == 0)
        printf("\nYou ran out of tries. The number was %d idiot\n",randomNumber);
    
    return 0;
}