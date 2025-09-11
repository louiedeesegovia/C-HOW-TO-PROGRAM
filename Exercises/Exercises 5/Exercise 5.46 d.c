#include <stdio.h>

int main() {
    double y = 123.45678;  // a floating-point number
    int x;                 // integer variable

    x = (int)y;            // explicit conversion (truncate decimal part)

    printf("y = %f\n", y);   // print original double
    printf("x = %d\n", x);   // print integer
    printf("x as double = %f\n", (double)x); // cast back to double for printing

    return 0;
}

