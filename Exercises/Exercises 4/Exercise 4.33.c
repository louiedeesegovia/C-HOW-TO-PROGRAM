#include <stdio.h>

int main() {
    int i;
    int decimal[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *roman[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Decimal\tRoman\n");
    printf("-------\t------\n");

    for (i = 1; i <= 100; i++) {
        int num = i;
        printf("%3d\t", i);

        int j = 0;
        while (num > 0) {
            if (num >= decimal[j]) {
                printf("%s", roman[j]);
                num -= decimal[j];
            } else {
                j++;
            }
        }

        printf("\n");
    }

    return 0;
}

