#include <stdio.h>

int main() {
    int i, j;
    int temp = 9;

    int mid = temp / 2;

    for (i = 0; i < temp; i++) {
        for (j = 0; j < temp; j++) {
            if (j >= mid - i && j <= mid + i && i <= mid)
                printf("*");
            else if (j >= i - mid && j < temp - (i - mid) && i > mid)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

