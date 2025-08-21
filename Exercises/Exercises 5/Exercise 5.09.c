#include <stdio.h>

float calculateCharges(float hours) {
    float charge = 2.00;

    if (hours <= 3.0) {
        return charge;
    } else {
        charge += 0.50 * (hours - 3.0);
        if (charge > 10.00) {
            charge = 10.00;
        }
    }
    return charge;
}

int main() {
    float hours[3];
    float charges[3];
    float totalHours = 0, totalCharges = 0;
    int index;

    for (index = 0; index < 3; index++) {
        printf("Enter hours parked for car %d: ", index + 1);
        scanf("%f", &hours[index]);

        charges[index] = calculateCharges(hours[index]);
        totalHours += hours[index];
        totalCharges += charges[index];
    }

    printf("\n%-10s%-10s%-10s\n", "Car", "Hours", "Charge");

    for (index = 0; index < 3; index++) {
        printf("%-10d%-10.1f%-10.2f\n", index + 1, hours[index], charges[index]);
    }

    printf("%-10s%-10.1f%-10.2f\n", "TOTAL", totalHours, totalCharges);

    return 0;
}

