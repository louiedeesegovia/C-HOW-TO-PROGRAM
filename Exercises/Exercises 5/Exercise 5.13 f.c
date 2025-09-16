#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL)); // seed with current time

    // Range size = (11 - (-3) + 1) = 15
    n = -3 + rand() % 15;

    printf("Random n: %d\n", n);

    return 0;
}

