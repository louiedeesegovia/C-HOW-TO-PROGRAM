#include<stdio.h>

int even(int number){
	
	if(number % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int number, result;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("The number is: ");
	result = even(number);
	
	if(result == 1){
		printf("Even");
	}
	else{
		printf("Odd");
	}
	
	return 0;
	
}
