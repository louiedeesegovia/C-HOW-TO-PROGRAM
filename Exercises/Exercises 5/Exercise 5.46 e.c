#include<stdio.h>

double square(double number){
	
	return number * number;
}

int main(){
	double x = 5.5;
	
	printf("Square of %.1lf is %.2lf\n", x, square(x));
	
	
	return 0;
}
