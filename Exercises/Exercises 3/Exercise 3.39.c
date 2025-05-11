#include <stdio.h>

int main() {
    int num, i = 1;
	int temp;
	
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        temp = i;

        while (temp > 0) {
            if (temp % 10 == 7) {
                printf("%d\n", i);
                break;
            }
            temp /= 10;
        }

        i++;
    }

    return 0;
}

