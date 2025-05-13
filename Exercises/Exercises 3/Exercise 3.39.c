#include <stdio.h>

int main() {
    int num, i = 1;
    int temp;
    int total_sevens = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        temp = i;
        int found = 0;

        while (temp > 0) {
            if (temp % 10 == 7) {
                total_sevens++;
                found = 1; 
            }
            temp /= 10;
        }

        if (found) {
            printf("%d\n", i);
        }

        i++;
    }

    printf("All Sevens: %d\n", total_sevens);

    return 0;
}
