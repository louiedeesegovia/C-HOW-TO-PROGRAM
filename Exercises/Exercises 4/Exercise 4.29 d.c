#include <stdio.h>

int main() {
    int i, j;

    for (i = 3; i <= 5; i++) {
        for (j = 5; j <= 7; j++) {
            int original = !((i > 4) || (j <= 6));
            int demorgan = (i <= 4) && (j > 6);

            printf("i=%d, j=%d | Original=%d, DeMorgan=%d\n", i, j, original, demorgan);
        }
    }

    return 0;
}

