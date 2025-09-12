#include <stdio.h>

float minimum(float number[], int size) {
    float min = number[0];   // use float, not int
    
    int i;
    for (i = 1; i < size; i++) {   // start from index 1
        if (number[i] < min) {
            min = number[i];
        }
    }
    
    return min;   // return the result
}

int main() {
    float num[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter number [%d]: ", i + 1);
        scanf("%f", &num[i]);
    }
    
    printf("The minimum number: %.2f\n", minimum(num, 3));
    
    return 0;
}

