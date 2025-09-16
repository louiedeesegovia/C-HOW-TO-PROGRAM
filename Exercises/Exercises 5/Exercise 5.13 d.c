#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL)); // seed once with current time

    // Range size = (1112 - 1000 + 1) = 113
    n = 1000 + rand() % 113;

    printf("Random n: %d\n", n);

    return 0;
}

