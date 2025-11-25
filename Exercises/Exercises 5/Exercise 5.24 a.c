#include<stdio.h>

float convert(float temperature){
	float total = (temperature * 1.8) + 32;
	
	return total;
}

int main(){
	float celsius;
	printf("Enter Celsius: ");
	scanf("%f", &celsius);
	
	printf("%.2f F", convert(celsius));
	
	return 0;
}
