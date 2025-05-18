#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to remove all spaces from the card number string
void removeSpaces(char *str) {
    char *i = str;
    char *j = str;
    while (*j != 0) {
        if (!isspace(*j)) {
            *i = *j;
            i++;
        }
        j++;
    }
    *i = 0;
}

int main() {
    FILE *atmFile = fopen("atm.txt", "r");    // Input file with card numbers
    FILE *bankFile = fopen("bank.txt", "w");   // Output file for results
    char line[100];                           // Buffer to read each line
    int i;

    if (!atmFile || !bankFile) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), atmFile)) {
        removeSpaces(line);  // Remove all spaces from line

        int arr[16];
        int length = strlen(line);
        int newn = 0;

        // Convert each character to an integer
        for (i = 0; i < 16; i++) {
            if (!isdigit(line[i])) {
                fprintf(bankFile, "Invalid character in input: %s", line);
                break;
            }
            arr[i] = line[i] - '0';
        }

        // Apply Luhn Algorithm
        for (i = 0; i < 16; i++) {
            if (i % 2 == 0) {
                arr[i] *= 2;
                if (arr[i] > 9) {
                    arr[i] = (arr[i] % 10) + (arr[i] / 10); // sum of digits
                }
            }
            newn += arr[i];
        }

        // Print processed digits (optional debug)
        for (i = 0; i < 16; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nTotal: %d\n", newn);

        int num3 = newn % 10;

        if (num3 == 0) {
            fprintf(bankFile, "%s - valid\n", line);
        } else {
            fprintf(bankFile, "%s - invalid!\n", line);
        }

        printf("\n");
    }

    fclose(atmFile);
    fclose(bankFile);

    printf("Finished processing.\n");
    return 0;
}

