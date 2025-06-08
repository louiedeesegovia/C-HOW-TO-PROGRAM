#include <stdio.h>

int main() {
    int n;
    int i = 1;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
    	while(i <= n){
    		factorial *= i;
    		i++;
		}
        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}

