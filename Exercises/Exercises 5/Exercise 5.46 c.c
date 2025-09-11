#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    // seed the random number generator using current time
    srand(time(0));

    // generate a random number between 0 and RAND_MAX
    int randomNumber = rand();

    // generate a random number between 1 and 100
    int random1to100 = rand() % 100 + 1;

    printf("Random number (any): %d\n", randomNumber);
    printf("Random number (1-100): %d\n", random1to100);

    return 0;
}

