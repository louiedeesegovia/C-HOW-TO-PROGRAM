#include<stdio.h>

int main(){
	int num1, num2, num3, num4, num5, num;
	
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	
	if(num<10000 || num>99999){
		printf("Invalid input! Please enter a five-digit number.");
	}
	num1 = num/10000;
	num2 = (num/1000)%10;
	num3 = (num/100)%10;
	num4 = (num/10)%10;
	num5 = num%10;
	
	if(num1 == num5 && num2 == num4){
		printf("The number is a Palindrome.");
	}
	else{
		printf("Not a palindrome!!! Try again!!!");
	}
	
	return 0;
}
