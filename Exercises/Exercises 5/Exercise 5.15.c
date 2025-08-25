#include<stdio.h>
#include<math.h>

double hypotenuse(double a, double b){
	
	return sqrt((a * a) + (b * b));
	
}

int main(){
	double a, b;
	
	printf("Enter a: ");
	scanf("%lf", &a);
	printf("Enter b: ");
	scanf("%lf", &b);
	
	printf("Hypotenuse length: %lf", hypotenuse(a, b));
	
	return 0;
}
