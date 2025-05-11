// The importance of comma operator

#include<stdio.h>

int main(){
	int x, y;
	int addition1 = 0, addition2 = 0, addition3 = 0, addition4 = 0;
	int subtraction1 = 0, subtraction2 = 0, subtraction3 = 0, subtraction4 = 0;
	int division1 = 0, division2 = 0, division3 = 0, division4 = 0;
	int multiply1 = 0, multiply2 = 0, multiply3 = 0, multiply4 = 0;
	
	printf("Enter the value of x: ");
	scanf("%d", &x);
	
	printf("Enter the value of y: ");
	scanf("%d", &y);
	
	addition1 = (x, x + y);
	addition2 = (y, x + y);
	addition3 = (x + x, y + y);
	addition4 = (x + y, x + y);
	
	subtraction1 = (x, x - y);
	subtraction2 = (y, x - y);
	subtraction3 = (x - x, y - y);
	subtraction4 = (x - y, x - y);
	
	division1 = (x, x / y);
	division2 = (y, x / y);
	division3 = (x / x, y / y);
	division4 = (x / y, x / y);
	
	multiply1 = (x, x * y);
	multiply2 = (y, x * y);
	multiply3 = (x * x, y * y);
	multiply4 = (x * y, x * y);
	
	printf("Addition 01: %d\n", addition1);
	printf("Addition 02: %d\n", addition2);
	printf("Addition 03: %d\n", addition3);
	printf("Addition 04: %d\n\n", addition4);
	
	printf("Subtration 01: %d\n", subtraction1);
	printf("Subtration 02: %d\n", subtraction2);
	printf("Subtration 03: %d\n", subtraction3);
	printf("Subtration 04: %d\n\n", subtraction4);
	
	printf("Division 01: %d\n", division1);
	printf("Division 02: %d\n", division2);
	printf("Division 03: %d\n", division3);
	printf("Division 04: %d\n\n", division4);
	
	printf("Multiply 01: %d\n", multiply1);
	printf("Multiply 02: %d\n", multiply2);
	printf("Multiply 03: %d\n", multiply3);
	printf("Multiply 04: %d\n\n", multiply4);
	
	return 0;
}
