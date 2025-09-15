#include <stdio.h>

// Function to check if second is multiple of first
int multiple(int a, int b) {
    if (a == 0) {
        return 0; // avoid division by zero
    }
    return (b % a == 0) ? 1 : 0;
}

int main() {
    int x, y;
    char choice;

    printf("Check multiples of integers.\n");

    do {
        printf("\nEnter two integers (first second): ");
        scanf("%d %d", &x, &y);

        if (multiple(x, y)) {
            printf("%d IS a multiple of %d.\n", y, x);
        } else {
            printf("%d is NOT a multiple of %d.\n", y, x);
        }

        printf("Do you want to check another pair? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    return 0;
}

