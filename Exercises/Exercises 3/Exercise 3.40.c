#include <stdio.h>

int main() {
    int i = 0;

    while (i < 8) {
        int j = 0;

        if (i % 2 == 0) {
            while (j < 8) {
                printf("* ");
                j++;
            }
        } else {
            printf(" ");
            while (j < 9) {
                printf("* ");
                j++;
            }
        }

        printf("\n");
        i++;
    }

    return 0;
}

