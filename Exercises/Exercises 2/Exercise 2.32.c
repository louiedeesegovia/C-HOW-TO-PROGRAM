//IDNo. #00033

#include<stdio.h>

int main(){
	int num;
	float weight, height, bmi;
	printf("BMI CALCULATOR\n\n");
	
	printf("Choose unit system: \n");
	printf("1. Pounds and inches\n");
	printf("2. Kilograms and meters\n");
	printf("Enter your choice: ");
	scanf("%d",&num);
	
	if(num == 1){
		printf("Enter weight in pounds: ");
		scanf("%f", &weight);
		printf("Enter height in inches: ");
		scanf("%f", &height);
		bmi = weight * 703 / (height*height);
	}
	else if(num == 2){
		printf("Enter weight in kilograms: ");
		scanf("%f", &weight);
		printf("Enter height in meters: ");
		scanf("%f", &height);
		bmi = weight/(height*height);
	}
	else{
		printf("INVALID CHOICE!!\n");
	}
	printf("Result: %.2f\n", bmi);
	
	if(bmi<18.5){
		printf("You are underweight.");
	}
	else if(bmi>=18.5 && bmi <= 24.9){
		printf("You have a normal weight.");
	}
	else if(bmi>= 25 && bmi <= 29.9){
		printf("You are overweight.");
	}
	else{
		printf("You are obese.");
	}
	
	
	return 0;
}

