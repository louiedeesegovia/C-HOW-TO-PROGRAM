#include<stdio.h>

int main(){
	int num1, num2, num3, sum, ave, pro;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	sum = num1+num2+num3;
	ave = sum/3;
	pro = num1*num2*num3;
	
	printf("Sum: %d\n", sum);
	printf("Average: %d\n", ave);
	printf("Product: %d\n", pro);
	
	//Smallest
	if(num1<num2 && num1<num3){
		printf("Smallest: %d\n", num1);
	}
	if(num2<num1 && num2<num3){
		printf("Smallest: %d\n", num2);
	}
	if(num3<num1 && num3<num2){
		printf("Smallest: %d\n", num3);
	}
	
	//Largest
	if(num1>num2 && num1>num3){
		printf("Largest: %d\n", num1);
	}
	if(num2>num1 && num2>num3){
		printf("Largest: %d\n", num2);
	}
	if(num3>num1 && num3>num2){
		printf("Largest: %d\n", num3);
	}
	
	return 0;
}
