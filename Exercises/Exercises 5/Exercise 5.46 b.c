#include <stdio.h>

int main() {
    // auto variable (default for local variables)
    auto int a = 10;   // same as just "int a = 10;"
    
    // register variable
    register int b = 20;

    printf("Auto variable a = %d\n", a);
    printf("Register variable b = %d\n", b);

    // Modifying values
    a += 5;
    b += 5;

    printf("After modification:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Important difference:
    // printf("%p", &b); // ? ERROR: cannot take address of register variable

    return 0;
}

