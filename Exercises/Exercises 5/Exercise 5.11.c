#include<stdio.h>
#include<math.h>

double integer(double number){
	
	return floor(number + 0.5);
	
}

double tenth(double number){
	
	return floor(number * 10 + 0.5)/10;
	
}

double hundredth(double number){
	
	return floor(number * 100 + 0.5)/100;
	
}


double thousandth(double number){
	
	return floor(number * 1000 + 0.5)/1000;
	
}

int main(){
	double x;
	
	printf("Enter a 6 digit decimal number: ");
	scanf("%lf", &x);
	
	printf("Original number: %lf\n", x);
	printf("Integer number: %.0lf\n", integer(x));
	printf("Tenth number: %.1lf\n", tenth(x));
	printf("Hundredth number: %.2lf\n", hundredth(x));
	printf("Thousandth number: %.3lf\n", thousandth(x));
	
	return 0;
}
