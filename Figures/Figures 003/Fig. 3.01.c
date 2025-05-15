/*
 * Converts distance in miles to kilometers
*/

#include <stdio.h>                 // For printf and scanf
#define KMS_PER_MILE 1.609        // Conversion constant

int main(void) {
    double miles;                 // Input: distance in miles
    double kms = 0;                   // Output: distance in kilometers

    printf("Enter miles: ");
    scanf("%lf", &miles);

    kms = miles * KMS_PER_MILE;
    printf("Distance in kilometers is: %lf\n", kms);

    return 0;
}

