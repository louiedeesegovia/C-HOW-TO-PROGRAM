#include <stdio.h>

int main(void) {
    int grade;
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;
    int totalGrades = 0;
    int totalPoints = 0;

    printf("Enter the letter grades (A–F).\n");
    printf("Enter the EOF character to end input (Ctrl+D in Linux/macOS, Ctrl+Z in Windows).\n");

    while ((grade = getchar()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                totalPoints += 4;
                ++totalGrades;
                break;

            case 'B':
            case 'b':
                ++bCount;
                totalPoints += 3;
                ++totalGrades;
                break;

            case 'C':
            case 'c':
                ++cCount;
                totalPoints += 2;
                ++totalGrades;
                break;

            case 'D':
            case 'd':
                ++dCount;
                totalPoints += 1;
                ++totalGrades;
                break;

            case 'F':
            case 'f':
                ++fCount;
                totalPoints += 0;
                ++totalGrades;
                break;

            case '\n':
            case '\t':
            case ' ':
                break; // ignore whitespace

            default:
                printf("Incorrect letter grade entered. Enter a new grade.\n");
                break;
        }
    }

    printf("\nTotals for each letter grade are:\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    if (totalGrades > 0) {
        float average = (float)totalPoints / totalGrades;
        printf("Total Average Grade: %.2f\n", average);
    } else {
        printf("No valid grades entered.\n");
    }

    return 0;
}

