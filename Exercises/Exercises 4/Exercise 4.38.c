#include <stdio.h>

int main() {
    double population = 8100000000.0;  // Starting population (2025 estimate)
    double growthRate = 0.009;         // Annual growth rate (0.9%)
    double newPopulation, increase;
    int doubleYear = 0;
    int year;

    double targetPopulation = population * 2;

    printf("Year\tPopulation\t\tIncrease\n");
    printf("----------------------------------------------------\n");

    for (year = 1; year <= 75; year++) {
        increase = population * growthRate;
        newPopulation = population + increase;

        printf("%2d\t%.0f\t%.0f\n", year, newPopulation, increase);

        if (newPopulation >= targetPopulation && doubleYear == 0) {
            doubleYear = year;
        }

        population = newPopulation;
    }

    if (doubleYear > 0) {
        printf("\nThe world population will double in year %d.\n", doubleYear);
    } else {
        printf("\nThe world population will not double within 75 years at the current growth rate.\n");
    }

    return 0;
}

