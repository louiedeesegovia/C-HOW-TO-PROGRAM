#include<stdio.h>
#include<math.h>

int main(){
	int population;
	float growthrate;
	int year = 1;
	float estimate = 0;
	float decimal = 0;
	
	printf("Enter current population: ");
	scanf("%d", &population);
	
	printf("Enter annual growth rate (in %): ");
	scanf("%f", &growthrate);
	
	decimal = growthrate/100;
	
	while(year != 6){
		estimate = population * pow(1 + growthrate, year);
		printf("Year %d estimation: %.2f\n", year, estimate);
		year++;
	}
	
	return 0;
}
