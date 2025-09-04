//IDno. #00025

#include<stdio.h>
int main(){
	int num1, num2;
	
	printf("Enter the first integer: ");
	scanf("%d", &num1);
	printf("Enter the second integer: ");
	scanf("%d", &num2);
	
	if(num2 != 0){
		if(num1%num2==0){
			printf("%d is a multiple of %d", num1, num2 );
		}
		else{
			printf("%d is NOT a multiple of %d", num2);
		}
	}
	else{
		printf("Division by zero is not allowed!");
	}
		
	return 0;
}

