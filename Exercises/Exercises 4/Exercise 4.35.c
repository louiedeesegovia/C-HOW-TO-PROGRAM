#include<stdio.h>

int main(void) {
    int x = 1;
    int shouldExit = 0;

    while (x <= 10 && !shouldExit) {
        if (x == 5) {
            shouldExit = 1; 
        } else {
            printf("%d", x);
        }
        x++;
    }

    printf("\nBroke out of loop at x == %d\n", x);

    return 0;
}

