#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i = 1;
    
    while(i <= n){
    	fact *= i;
    	i++;
	}
    
    return fact;
}

int main() {
    int n;
    double e = 1.0;
    int i = 1;

    printf("Enter the number of terms to approximate e: ");
    scanf("%d", &n);
	
	while(i <= n){
		e += 1.0 / factorial(i);
		i++;
	}

    printf("Estimated value of e using %d terms: %.10f\n", n, e);

    return 0;
}

