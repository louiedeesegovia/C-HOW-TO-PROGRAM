#include<stdio.h>

float convert(float temperature){
	float total = (temperature - 32) * 0.5556;
	
	return total;
}

int main(){
	float fahrenheit;
	printf("Enter Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	printf("%.2f C", convert(fahrenheit));
	
	return 0;
}
