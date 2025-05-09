#include <stdio.h>

int main() {
    int num, original, digit, isBinary = 1;
    int decimal = 0, powerOfTwo = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
	
    while (num > 0) {
        digit = num % 10;
        if (digit != 0 && digit != 1) {
            isBinary = 0;
            break;
        }
        num /= 10;
    }

    if (isBinary) {
        num = original;
        while (num > 0) {
            digit = num % 10;
            decimal += digit * powerOfTwo;
            powerOfTwo *= 2;  // same as pow(2, position)
            num /= 10;
        }
        printf("Decimal equivalent: %d\n", decimal);
    } else {
        printf("The number is NOT binary.\n");
    }

    return 0;
}


