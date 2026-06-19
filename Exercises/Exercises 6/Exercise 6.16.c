#include <stdio.h>

int main() {
    int row, column;
    int sales[3][5];

    for(row = 0; row < 3; row++) {
        for(column = 0; column < 5; column++) {
            sales[row][column] = 0;
        }
    }

    for(row = 0; row < 3; row++) {
        for(column = 0; column < 5; column++) {
            printf("%d ", sales[row][column]);
        }
        printf("\n");
    }

    return 0;
}