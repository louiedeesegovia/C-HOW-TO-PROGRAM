#include<stdio.h>

int main(){
	int num1, num2, sum, product, difference, quotient, remainder;
	
	printf("Entry 1\n");
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	printf("\n");
	printf("Entry 2\n");
	printf("Enter a number: ");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = num1/num2;
	remainder = num1%num2;
	
	printf("The sum of %d and %d is = %d\n", num1, num2, sum);
	printf("The product of %d and %d is = %d\n", num1, num2, product);
	printf("The difference of %d and %d is = %d\n", num1, num2, difference);
	printf("The qoutient of %d and %d is = %d\n", num1, num2, quotient);
	printf("The remainder of %d and %d is = %d\n", num1, num2, remainder);
	
}
