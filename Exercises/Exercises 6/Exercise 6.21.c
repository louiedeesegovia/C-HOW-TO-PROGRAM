#include <stdio.h>

int main() {
    int seats[10] = {0}; // 0 = empty, 1 = occupied
    int choice, assigned, i;
    char another, transfer;

    do {
        int full = 1;

        for (i = 0; i < 10; i++) {
            if (seats[i] == 0) {
                full = 0;
            break;
            }
        }

        if (full) {
                printf("\nAll seats are full.\n");
            break;
        }
        
        assigned = 0;

        printf("\nPlease type 1 for \"first class\"\n");
        printf("Please type 2 for \"economy\"\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        // First Class
        if (choice == 1) {
            for (i = 0; i < 5; i++) {
                if (seats[i] == 0) {
                    seats[i] = 1;
                    printf("\nBOARDING PASS\n");
                    printf("Seat: %d\n", i + 1);
                    printf("Class: First Class\n");
                    assigned = 1;
                    break;
                }
            }

            if (!assigned) {
                printf("\nFirst Class is full.\n");
                printf("Would you like a seat in Economy? (Y/N): ");
                scanf(" %c", &transfer);

                if (transfer == 'Y' || transfer == 'y') {
                    for (i = 5; i < 10; i++) {
                        if (seats[i] == 0) {
                            seats[i] = 1;
                            printf("\nBOARDING PASS\n");
                            printf("Seat: %d\n", i + 1);
                            printf("Class: Economy\n");
                            assigned = 1;
                            break;
                        }
                    }
                }

                if (!assigned) {
                    printf("Next flight leaves in 3 hours.\n");
                }
            }
        }

        // Economy
        else if (choice == 2) {
            for (i = 5; i < 10; i++) {
                if (seats[i] == 0) {
                    seats[i] = 1;
                    printf("\nBOARDING PASS\n");
                    printf("Seat: %d\n", i + 1);
                    printf("Class: Economy\n");
                    assigned = 1;
                    break;
                }
            }

            if (!assigned) {
                printf("\nEconomy is full.\n");
                printf("Would you like a seat in First Class? (Y/N): ");
                scanf(" %c", &transfer);

                if (transfer == 'Y' || transfer == 'y') {
                    for (i = 0; i < 5; i++) {
                        if (seats[i] == 0) {
                            seats[i] = 1;
                            printf("\nBOARDING PASS\n");
                            printf("Seat: %d\n", i + 1);
                            printf("Class: First Class\n");
                            assigned = 1;
                            break;
                        }
                    }
                }

                if (!assigned) {
                    printf("Next flight leaves in 3 hours.\n");
                }
            }
        }

        else {
            printf("Invalid choice.\n");
        }

        printf("\nGet another ticket?\n");
        printf("Press [Y/y] for YES or [N/n] for NO: ");
        scanf(" %c", &another);

    } while (another == 'Y' || another == 'y');

    return 0;
}
