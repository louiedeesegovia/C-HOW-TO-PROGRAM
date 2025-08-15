#include <stdio.h>

int main() {
    int payCode;
    float salary, hours, rate, sales, commission, pieces, payPerPiece;

    while (1) {
        printf("\nEnter employee pay code (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1=Exit): ");
        scanf("%d", &payCode);

        if (payCode == -1) {
            printf("Exiting payroll system...\n");
            break;
        }

        switch (payCode) {
            case 1:
                printf("Enter fixed weekly salary: ");
                scanf("%f", &salary);
                printf("Weekly pay: $%.2f\n", salary);
                break;

            case 2: 
                printf("Enter hourly wage: ");
                scanf("%f", &rate);
                printf("Enter number of hours worked: ");
                scanf("%f", &hours);
                if (hours <= 40) {
                    salary = hours * rate;
                } else {
                    salary = (40 * rate) + ((hours - 40) * rate * 1.5);
                }
                printf("Weekly pay: $%.2f\n", salary);
                break;

            case 3: 
                printf("Enter gross weekly sales: ");
                scanf("%f", &sales);
                commission = 250 + (0.057 * sales);
                printf("Weekly pay: $%.2f\n", commission);
                break;

            case 4: 
                printf("Enter number of pieces produced: ");
                scanf("%f", &pieces);
                printf("Enter pay per piece: ");
                scanf("%f", &payPerPiece);
                salary = pieces * payPerPiece;
                printf("Weekly pay: $%.2f\n", salary);
                break;

            default:
                printf("Invalid pay code. Please try again.\n");
        }
    }

    return 0;
}

