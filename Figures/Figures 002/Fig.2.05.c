#include <stdio.h>

int main(void)
	{
		int num1;
		int num2;
		int sum;
		
		printf("Enter first number: ");
		scanf("%d", &num1);
		
		printf("Enter second number: ");
		scanf("%d", &num2);
		
		sum = num1 + num2;
		
		printf("Total = %d", sum);
	}
