#include<stdio.h>

long fibonacci(long n){
	if(n == 0 || n == 1){
		return n;
	}
	else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(void){
	long result;
	long number;
	
	printf("Enter an integer: ");
	scanf("%ld", &number);
	
	result = fibonacci (number);
	
	printf("Fibonacci (%1d) = %1d\n", number, result);
	return 0;
}
