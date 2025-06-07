#include<stdio.h>

int main(){
	float A, B, C;
	
	printf("Enter A side: ");
	scanf("%f", &A);
	
	printf("Enter B side: ");
	scanf("%f", &B);
	
	printf("Enter C side: ");
	scanf("%f", &C);
	
	if(A <= 0 || B <= 0 || C <= 0){
		printf("\nPlease enter a number that is not negative!");
	}
	else if((A+B > C) && (A+C > B) && (B+C > A)){
		printf("\nThese sides can form a triangle");
	}
	else{
		printf("\nThese sides cannot form a triangle");
	}
	
	return 0;
}
