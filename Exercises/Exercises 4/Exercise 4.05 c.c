#include <stdio.h>

int main() {
    int intVal;
    char charVal;

    printf("Enter a number: ");
    scanf("%d", &intVal);

    while ((getchar()) != '\n');

    printf("Enter a character: ");
    charVal = getchar();

    printf("Integer: %d\nCharacter: %c\n", intVal, charVal);

    return 0;
}

