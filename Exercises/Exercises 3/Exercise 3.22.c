#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;

    printf("Postdecrementing:\n");
    printf("Initial value of a: %d\n", a);
    printf("Using a--: %d\n", a--); 
    printf("Value of a after a--: %d\n\n", a);

    printf("Predecrementing:\n");
    printf("Initial value of b: %d\n", b);
    printf("Using --b: %d\n", --b); 
    printf("Value of b after --b: %d\n", b);

    return 0;
}

