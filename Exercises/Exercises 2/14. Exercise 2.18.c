#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter number 1: ", num1);
	scanf("%d", &num1);
	printf("Enter number 2: ", num2);
	scanf("%d", &num2);
	
	if(num1>num2){
		printf("%d is larger than %d", num1, num2);
	}
	if(num1<num2){
			printf("%d is larger than %d", num2, num1);
		}
	if(num1==num2){
		printf("%d is equal to %d", num1 , num2);
	}
	
	
	return 0;
}
