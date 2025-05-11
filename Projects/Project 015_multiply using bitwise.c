#include<stdio.h>

int main(){
	
	long number, temp;
	
	printf("Enter an integer: ");
	scanf("%ld", &number);
	
	temp = number;
	number = number << 2; // 2, 4, 8, 16, 32;
	
	printf("%ld x 4 = %ld", temp, number);
	
	return 0;
}
