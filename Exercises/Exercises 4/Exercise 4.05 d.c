#include <stdio.h>

int main() {
    float x;

    for (x = 0.000001; x <= 0.0001; x += 0.0000001) {
        printf("%.7f\n", x);
    }

    return 0;
}

