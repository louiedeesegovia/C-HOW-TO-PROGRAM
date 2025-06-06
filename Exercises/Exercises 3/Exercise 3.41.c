#include <stdio.h>

int main() {
    unsigned long long num = 2;

    while (1) {
        printf("%llu ", num);
        num *= 2;
    }

    return 0;
}

