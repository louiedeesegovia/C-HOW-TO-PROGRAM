#include<stdio.h>

int main(){
	float celcius, fahrenheit;
	
	printf("Enter Celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (1.8 * celcius) + 32;
	printf("Temperature in Fahrenheit: %f", fahrenheit);
	
	return 0;
	
}
