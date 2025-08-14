#include <stdio.h>
#include <math.h>

int main(void) {
    double amount;
    double principal = 1000.0;
    int rate, year;

    printf("%s\n", "Interest Rate Table (5% to 10%)");
    
    for (rate = 5; rate <= 10; rate++) {
        printf("\nInterest Rate: %d%%\n", rate);
        printf("%4s\t%s\n", "Year", "Amount on deposit");

        for (year = 1; year <= 10; year++) {
            amount = principal * pow(1.0 + (rate / 100.0), year);
            printf("%4d\t\t%.2lf\n", year, amount);
        }
    }

    return 0;
}

