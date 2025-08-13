#include <stdio.h>

int main() {
    int i, j;
    unsigned long long factorial;

    printf("Number\tFactorial\n");
    printf("-------------------\n");

    for (i = 1; i <= 20; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("%d\t%llu\n", i, factorial);
    }

    return 0;
}

