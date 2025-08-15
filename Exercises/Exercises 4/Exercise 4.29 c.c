#include <stdio.h>

int main() {
    int x, y;

    for (x = 7; x <= 9; x++) {
        for (y = 3; y <= 5; y++) {
            int original = !((x <= 8) && (y > 4));
            int demorgan = (x > 8) || (y <= 4);

            printf("x=%d, y=%d | Original=%d, DeMorgan=%d\n", x, y, original, demorgan);
        }
    }

    return 0;
}

