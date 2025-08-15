#include <stdio.h>

int main(void) {
    int x, y;

    for (x = 3; x <= 6; x++) {
        for (y = 6; y <= 8; y++) {

            int original = !(x < 5) && !(y >= 7);
            int demorgan = !((x < 5) || (y >= 7));

            printf("x = %d, y = %d | Original = %d, DeMorgan = %d\n", x, y, original, demorgan);
        }
    }

    return 0;
}

