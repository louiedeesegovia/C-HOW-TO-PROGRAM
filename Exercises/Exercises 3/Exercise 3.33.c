#include <stdio.h>

int main() {
    int num;
    int row = 1, col;

    printf("Enter a number (1-20): ");
    scanf("%d", &num);

    if (num < 1 || num > 20) {
        printf("Invalid input.\n");
        return 1;
    }

    while (row <= num) {
        col = 1;  // Reset column counter for each new row
        while (col <= num) {
            printf("*");
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}

