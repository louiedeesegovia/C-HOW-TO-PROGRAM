// Dollar and peso converter

#include<stdio.h>

int main(){
	int choice;
	float dollar, peso;
	float total = 0;
	
	printf("1. Dollar  to Peso\n");
	printf("2. Peso to Dollar\n");
	
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	if(choice == 1){
		printf("Dollar: ");
		scanf("%f", &dollar);
		
		total = dollar * 55.358;
		
		printf("Peso: %.2f", total);
	}
	else if(choice == 2){
		printf("Peso: ");
		scanf("%f", &peso);
		
		total = peso / 55.358;
		
		printf("Dollar: %.2f", total);
	}
	else{
		printf("Invalid number!");
	}
	
	return 0;
}
