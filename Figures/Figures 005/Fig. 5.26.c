#include<stdio.h>

int main(){
	
	double num1;
	double num2;
	double num3;
	double num4;
	
	printf("Enter value of number 01: ");
	scanf("%lf", &num1);
	printf("Enter value of number 02: ");
	scanf("%lf", &num2);
	printf("Enter value of number 03: ");
	scanf("%lf", &num3);
	printf("Enter value of number 04: ");
	scanf("%lf", &num4);
	
	double result1 = num1 + num2 + num3 + num4;
	double result2 = num1 * num2 * num3 * num4;
	double result3 = result1 + result2;
	double result4 = result1 * result2;
	double result5 = result3 / 1.61;
	double result6 = result4 / 1.61;
	
	printf("%lf\n", result1);
	printf("%lf\n", result2);
	printf("%lf\n", result3);
	printf("%lf\n", result4);
	printf("%lf\n", result5);
	printf("%lf\n", result6);
	
	return 0;
}
