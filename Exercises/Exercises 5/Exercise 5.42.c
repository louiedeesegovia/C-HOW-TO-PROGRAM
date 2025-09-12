#include <stdio.h>

int main() {
    int c;

    if ((c = getchar()) != EOF) {   // FIXED
        main();                     // recursive call
        printf("%c", c);
    }

    return 0;
}

