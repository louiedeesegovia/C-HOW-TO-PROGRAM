#include<stdio.h>

int integerPower(int base, int exponent){
	int i, result = 1;
	
	for(i = 1; i <= exponent; i++){
		result *= base;
	}
	
	return result;
}

int main(){
	int base, exponent;
	
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter exponent number: ");
	scanf("%d", &exponent);
	
	
	
	printf("Answer: %d", integerPower(base, exponent));
	
	return 0;
}
