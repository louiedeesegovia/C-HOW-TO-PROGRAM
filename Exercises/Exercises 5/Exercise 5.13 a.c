#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // seed the random generator
    srand(time(NULL));

    // generate random integer between 1 and 2
    n = 1 + rand() % 2;

    printf("Random n: %d\n", n);

    return 0;
}


