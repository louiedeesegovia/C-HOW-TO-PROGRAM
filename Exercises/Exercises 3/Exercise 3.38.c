#include <stdio.h>

int main() {
    int row = 1; 

    while (row <= 100) {
        printf("*");

        if (row % 10 == 0) {
            printf("\n");
        }

        row++;
    }

    return 0;
}

