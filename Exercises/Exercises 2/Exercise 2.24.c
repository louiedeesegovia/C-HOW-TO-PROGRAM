//IDno. #00023

#include <stdio.h>

int main(){
	int num;
	printf("Enter a number: ", num);
	scanf("%d", &num);
	
	if(num%2==0){
		
		printf("Even");
		
	}
	else{
			printf("Odd");
		}
	return 0;
}

