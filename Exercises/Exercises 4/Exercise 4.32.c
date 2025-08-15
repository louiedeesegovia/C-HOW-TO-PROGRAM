#include <stdio.h>

int main() {
    int rows, i, j, space;

    do {
        printf("Enter an odd number between 1 and 19: ");
        scanf("%d", &rows);
    } while (rows < 1 || rows > 19 || rows % 2 == 0);

    int mid = (rows + 1) / 2;

    for (i = 1; i <= mid; i++) {
        for (space = 1; space <= mid - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = mid - 1; i >= 1; i--) {
        for (space = 1; space <= mid - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

