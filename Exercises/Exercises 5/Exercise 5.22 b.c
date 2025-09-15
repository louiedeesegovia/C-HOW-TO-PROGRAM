#include <stdio.h>

int check(int x, int y) {
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;  // return 0 as a safe default
    } else {
        return x % y;  // integer division
    }
}

int main() {
    int a, b, r;

    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);
	
    r = check(a, b);  // call the function

    if (b != 0) {  // only print result if denominator is valid
        printf("Remainder: %d\n", r);
    }

    return 0;
}

