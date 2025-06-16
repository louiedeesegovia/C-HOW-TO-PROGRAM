#include<stdio.h>

int main(){
	int n, i = 1;
	double result = 1.0, term = 1.0, x;
	
	printf("Enter value of x: ");
	scanf("%lf", &x);
	
	printf("Enter value of n: ");
	scanf("%d", &n);
	
	while(i < n){
		term = term * (x / i);
		result = result + term;
		i = i + 1;
	}
	
	printf("e^%.2lf = %.10lf", x, result);
	
	return 0;
}
