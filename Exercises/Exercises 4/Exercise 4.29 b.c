#include <stdio.h>

int main() {
    int a, b, g;

    for (a = 4; a <= 5; a++) {
        for (b = 4; b <= 5; b++) {
            for (g = 4; g <= 6; g++) {
                int original = !(a == b) || !(g != 5);
                int demorgan = !((a == b) && (g != 5));

                printf("a=%d, b=%d, g=%d | Original=%d, DeMorgan=%d\n", a, b, g, original, demorgan);
            }
        }
    }

    return 0;
}

