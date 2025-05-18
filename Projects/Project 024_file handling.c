#include <stdio.h>      // For file input/output functions
#include <string.h>     // For string handling functions
#include <ctype.h>      // For character classification functions like isspace()

// Function to remove all spaces from a string
void removeSpaces(char *str) {
    char *i = str;  // Pointer to store the result (no spaces)
    char *j = str;  // Pointer to read the original string
    while (*j != 0) {              // Loop until end of string
        if (!isspace(*j)) {       // If current character is not a space
            *i = *j;              // Copy character to result pointer
            i++;                  // Move result pointer
        }
        j++;                      // Move read pointer
    }
    *i = 0;                       // Null-terminate the new string
}

int main() {
    // Declare file pointers for input and output
    FILE *inputFile = fopen("input.txt", "r");   // Open input file in read mode
    FILE *outputFile = fopen("output.txt", "w"); // Open output file in write mode
    char line[100];  // Buffer to store each line from input file
    int a, b, c;     // Variables to store the three numbers from each line

    // Check if files were opened successfully
    if (!inputFile || !outputFile) {
        printf("Error opening file.\n"); // Print error message
        return 1;                        // Exit program with error code
    }

    // Read each line from the input file
    while (fgets(line, sizeof(line), inputFile)) {
        removeSpaces(line);  // Remove all spaces from the line

        // Try to extract three integers separated by '+' and ending with '='
        if (sscanf(line, "%d+%d+%d=", &a, &b, &c) == 3) {
            int sum = a + b + c;  // Compute the sum of the three numbers
            // Write the full expression with result to output file
            fprintf(outputFile, "%d + %d + %d = %d\n", a, b, c, sum);
        } else {
            // Write an error message to output file if line format is invalid
            fprintf(outputFile, "Invalid line format: %s\n", line);
        }
    }

    // Close both input and output files
    fclose(inputFile);
    fclose(outputFile);

    // Inform user that processing is done
    printf("Finished processing.\n");
    return 0; // Exit program successfully
}



