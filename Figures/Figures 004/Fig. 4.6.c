#include<stdio.h>
#include<math.h>

int main(void){
	double amount;
	double principal = 1000.0;
	double rate = 0.5;
	int year;
	
	printf("%4s%2ls\n", "Year\t\t\tAmount on deposit\n");
	
	for(year = 1; year <= 10; year++){
		amount = principal * pow(1.0 + rate, year);
		printf("%4d\t\t\t%.2lf\n", year, amount);
	}
	
	return 0;
}
