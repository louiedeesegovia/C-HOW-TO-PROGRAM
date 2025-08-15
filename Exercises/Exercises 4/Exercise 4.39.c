#include <stdio.h>

int main(void) {
    float housing, food, clothing, transportation, education, healthcare, vacations;
    float totalExpenses, fairTax;

    printf("Enter your expenses in the following categories:\n");

    printf("Housing: $");
    scanf("%f", &housing);

    printf("Food: $");
    scanf("%f", &food);

    printf("Clothing: $");
    scanf("%f", &clothing);

    printf("Transportation: $");
    scanf("%f", &transportation);

    printf("Education: $");
    scanf("%f", &education);

    printf("Health care: $");
    scanf("%f", &healthcare);

    printf("Vacations: $");
    scanf("%f", &vacations);

    totalExpenses = housing + food + clothing + transportation + education + healthcare + vacations;
    fairTax = totalExpenses * 0.23;  // 23% FairTax

    printf("\nTotal Expenses: $%.2f\n", totalExpenses);
    printf("Estimated FairTax (23%%): $%.2f\n", fairTax);

    return 0;
}

