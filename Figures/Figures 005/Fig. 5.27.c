#include<stdio.h>

int main(){
	
	float a;
	float b;
	float c;
	float d;
	
	printf("Enter value of ( a ): ");
	scanf("%f", &a);
	printf("Enter value of ( b ): ");
	scanf("%f", &b);
	printf("Enter value of ( c ): ");
	scanf("%f", &c);
	printf("Enter value of ( d ): ");
	scanf("%f", &d);
	
	float result1 = a + b + c + d;
	float result2 = a * b * c * d;
	float result3 = result1 + result2;
	float result4 = result1 * result2;
	
	printf("size of float: %zu\n\n", sizeof(float));
	
	printf("%f\n", result1);
	printf("%f\n", result2);
	printf("%f\n", result3);
	printf("%f\n", result4);
}
