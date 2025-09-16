#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL)); // seed the random number generator

    // Range size = (1 - (-1) + 1) = 3
    n = -1 + rand() % 3;

    printf("Random n: %d\n", n);

    return 0;
}

