#include <stdio.h>

void check(int x) {
    int digits[10], count = 0;

    while (x > 0) {
        digits[count++] = x % 10; // extract last digit
        x /= 10;
    }

    // print in reverse order to show correct digit order
    int i;
    for (i = count - 1; i >= 0; i--) {
        printf("%d  ", digits[i]);
    }
}

int main() {
	int i;
    for (i = 1; i <= 32767; i++) {
        check(i);
        printf("\n");
    }
    return 0;
}

