#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lesson: Creating a Guessing Game.
/*
NOTE: Originally, the lesson just had you set secretNumber to 5. I wanted to take this a step further and looked into a way
to randomize a number in a range of 1-10, in which I found utilizing srand(time(NULL)); with the time.h file. This may not be
the best way, but it got me past the roadblock of getting the exact same number each time I rand the program ONLY using rand() % 10 + 1;
*/

int main()
{
    // First we're going to set up some variables to hold some information.
    srand(time(NULL));
    int secretNumber = rand() % 10 + 1;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    // Then we're making a while loop to continue to ask for a guess
    // while the number they guess is not the secretNumber.
    while (guess != secretNumber && outOfGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1)
    {
        printf("Out of guesses \n");
        printf("The number was: %d", secretNumber);
    } else {
        printf("You win!");
    }

    return 0;
}
