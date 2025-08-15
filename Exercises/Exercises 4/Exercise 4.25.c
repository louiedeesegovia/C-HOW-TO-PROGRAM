#include <stdio.h>

int main(void) {
    int i, j;

    printf("Decimal   Binary       Octal   Hex\n");
    printf("-------------------------------------\n");

    for (i = 1; i <= 256; i++) {
        printf("%-9d", i);  // Decimal

        // Inline binary printing (8 bits)
        for (j = 7; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
        }

        printf("     %03o     %02X\n", i, i);  // Octal and Hex
    }

    return 0;
}

