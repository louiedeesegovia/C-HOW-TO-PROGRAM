//IDno. #00022

#include<stdio.h>

int main(){
	
	int num1, num2, num3;
	
	printf("Enter 3 number: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if(num1 > num2){
		if(num1 > num3){
			printf("\nGreater number: %d", num1);
		}
	}
	
	if(num2 > num3){
		if(num2 > num1){
			printf("\nGreater number: %d", num2);
		}
	}
	
	if(num3 > num1){
		if(num3 > num2){
			printf("\nGreater number: %d", num3);
		}
	}
	
	if(num1 < num2){
		if(num1 < num3){
			printf("\nLesser number: %d", num1);
		}
	}
	
	if(num2 < num3){
		if(num2 < num1){
			printf("\nLesser number: %d", num2);
		}
	}
	
	if(num3 < num1){
		if(num3 < num2){
			printf("\nLesser number: %d", num3);
		}
	}
	
	return 0;
}

