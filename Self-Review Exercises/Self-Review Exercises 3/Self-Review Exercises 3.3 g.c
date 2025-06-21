#include <stdio.h>

int main() {
    int q = 10, divisor = 3;

    // Method 1
    q = q % divisor;
    printf("Method 1: q = %d\n", q); // Output: q = 1

    // Reset q
    q = 10;

    // Method 2
    q %= divisor;
    printf("Method 2: q = %d\n", q); // Output: q = 1

    return 0;
}
