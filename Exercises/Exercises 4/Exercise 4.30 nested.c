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
        if (grade == 'A' || grade == 'a') {
            ++aCount;
        } else if (grade == 'B' || grade == 'b') {
            ++bCount;
        } else if (grade == 'C' || grade == 'c') {
            ++cCount;
        } else if (grade == 'D' || grade == 'd') {
            ++dCount;
        } else if (grade == 'F' || grade == 'f') {
            ++fCount;
        } else if (grade == '\n' || grade == '\t' || grade == ' ') {
            // ignore whitespace
        } else {
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

