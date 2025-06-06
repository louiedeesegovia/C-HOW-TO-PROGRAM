#include <stdio.h>

int main() {
    float radius, diameter, circumference, area;
    const float PI = 3.14159;

    // Ask the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Compute values
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Display the results
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

