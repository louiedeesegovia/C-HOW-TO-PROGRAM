#include <stdio.h>

int main() {
    int encryptedNum;
    int digit1, digit2, digit3, digit4;
    int temp;

    printf("Enter the encrypted 4-digit number: ");
    scanf("%d", &encryptedNum);

    digit1 = (encryptedNum / 1000) % 10;
    digit2 = (encryptedNum / 100) % 10;
    digit3 = (encryptedNum / 10) % 10;
    digit4 = encryptedNum % 10;

    temp = digit1;
    digit1 = digit3;
    digit3 = temp;

    temp = digit2;
    digit2 = digit4;
    digit4 = temp;

    digit1 = (digit1 + 10 - 7) % 10;
    digit2 = (digit2 + 10 - 7) % 10;
    digit3 = (digit3 + 10 - 7) % 10;
    digit4 = (digit4 + 10 - 7) % 10;

    int decryptedNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    printf("Decrypted number: %04d\n", decryptedNumber);

    return 0;
}

