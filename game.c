
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    printf("=================================\n");
    printf("   RANDOM NUMBER GUESSING GAME\n");
    printf("=================================\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > randomNumber) {
            printf("Too high! Try a smaller number.\n\n");
        }
        else if (guess < randomNumber) {
            printf("Too low! Try a bigger number.\n\n");
        }
        else {
            printf("\nCongratulations! You guessed it!\n");
            printf("The correct number was %d.\n", randomNumber);
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != randomNumber);

    printf("\nThanks for playing!\n");

    return 0;
}
