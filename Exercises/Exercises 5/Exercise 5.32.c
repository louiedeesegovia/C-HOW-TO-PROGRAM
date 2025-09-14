#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    int num, guess;
    char g;

    // Generate random number once
    guess = (rand() % 1000) + 1;

    printf("I have a number between 1 and 1000."
           "\nCan you guess my number?"
           "\nPlease type your first guess.\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == guess) {
            printf("Excellent! You guessed the number!\n");
            printf("Would you like to play again (y or n)? ");
            scanf(" %c", &g); // notice the space before %c

            if (g == 'y' || g == 'Y') {
                // restart game
                playGame();
            } else {
                printf("Thanks for playing!\n");
                return;
            }
        } else if (num < guess) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    }
}

int main() {
    srand(time(NULL)); // seed random numbers

    playGame();

    return 0;
}

