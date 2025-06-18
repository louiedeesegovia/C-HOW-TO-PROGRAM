#include <stdio.h>

int main() {
    int num;
    int digit1, digit2, digit3, digit4;
    int temp;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    digit1 = (num / 1000) % 10;
    digit2 = (num / 100) % 10;
    digit3 = (num / 10) % 10;
    digit4 = num % 10;

    digit1 = (digit1 + 7) % 10;
    digit2 = (digit2 + 7) % 10;
    digit3 = (digit3 + 7) % 10;
    digit4 = (digit4 + 7) % 10;

    temp = digit1;
    digit1 = digit3;
    digit3 = temp;

    temp = digit2;
    digit2 = digit4;
    digit4 = temp;

    int encryptedNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    printf("Encrypted number: %04d\n", encryptedNumber);

    return 0;
}

