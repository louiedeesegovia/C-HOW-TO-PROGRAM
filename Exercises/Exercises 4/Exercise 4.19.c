#include <stdio.h>

int main() {
    int productNumber;
    int quantity;
    float price;
    float saleValue;
    float totalSales = 0.0; // Initialize to zero

    while (1) {
        printf("Enter product number (1–5) and quantity sold (Enter 0 to stop): ");
        scanf("%d", &productNumber);

        if (productNumber == 0) {
            break;
        }

        printf("Quantity: ");
        scanf("%d", &quantity);

        switch (productNumber) {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                printf("Invalid product number.\n");
                continue; // Skip rest of loop and ask again
        }

        saleValue = price * quantity;
        totalSales += saleValue;
    }

    printf("Total sales for the week: $%.2f\n", totalSales);

    return 0;
}

