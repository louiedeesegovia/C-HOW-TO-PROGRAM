#include <stdio.h>

int main(void) {
    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while ((grade = getchar()) != EOF) {
        int valid = 0;

        if (grade == 'A' || grade == 'a') {
            ++aCount;
            valid = 1;
        }
        if (grade == 'B' || grade == 'b') {
            ++bCount;
            valid = 1;
        }
        if (grade == 'C' || grade == 'c') {
            ++cCount;
            valid = 1;
        }
        if (grade == 'D' || grade == 'd') {
            ++dCount;
            valid = 1;
        }
        if (grade == 'F' || grade == 'f') {
            ++fCount;
            valid = 1;
        }
        if (grade == '\n' || grade == '\t' || grade == ' ') {
            valid = 1;
        }

        if (!valid) {
            printf("Incorrect letter grade entered.\n");
            printf("Enter a new grade.\n");
        }
    }

    printf("\nTotals for each letter grade are:\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    return 0;
}

