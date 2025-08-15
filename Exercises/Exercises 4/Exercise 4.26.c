#include <stdio.h>
#include <math.h>

int main(void) {
    double pi = 0.0;
    int denominator = 1;
    int sign = 1;
    int terms = 0;

    int found314 = 0, found3141 = 0, found31415 = 0, found314159 = 0;

    printf("Terms\t\tp Approximation\n");
    printf("------------------------------\n");

    while (!found314159) {
        pi += sign * (4.0 / denominator);
        terms++;
        sign *= -1;
        denominator += 2;

        printf("%d\t\t%.10f\n", terms, pi);

        if (!found314 && pi >= 3.14) {
            printf("Reached 3.14 at term: %d\n", terms);
            found314 = 1;
        }
        if (!found3141 && pi >= 3.141) {
            printf("Reached 3.141 at term: %d\n", terms);
            found3141 = 1;
        }
        if (!found31415 && pi >= 3.1415) {
            printf("Reached 3.1415 at term: %d\n", terms);
            found31415 = 1;
        }
        if (!found314159 && pi >= 3.14159) {
            printf("Reached 3.14159 at term: %d\n", terms);
            found314159 = 1;
        }
    }

    return 0;
}

