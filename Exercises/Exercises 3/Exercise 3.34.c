#include <stdio.h>

int main() {
    int num;
    int row = 1, col;

    printf("Enter size of the box (>=2): ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Box size must be at least 2.\n");
        return 1;
    }

    while (row <= num) {
        col = 1;
        while (col <= num) {
            if (row == 1 || row == num || col == 1 || col == num) { // if one of the given condition is correct then it will print "*"
                printf("*");  								
            } else {
                printf(" ");  
            }
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}


