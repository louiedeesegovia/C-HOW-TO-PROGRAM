#include<stdio.h>


int main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num<1||num>3999){
		printf("Invalid number!");
	}
	else{
		while(num>=1000){
			printf("M");
			num = num - 1000;
		}
		while(num>=900){
			printf("CM");
			num = num - 900;
		}
		while(num>=500){
			printf("D");
			num = num - 500;
		}
		while(num>=400){
			printf("CD");
			num = num - 400;
		}
		while(num>=100){
			printf("C");
			num = num - 100;
		}
		while(num>=90){
			printf("XC");
			num = num - 90;
		}
		while(num>=50){
			printf("L");
			num = num - 50;
		}
		while(num>=40){
			printf("XL");
			num = num - 40;
		}
		while(num>=10){
			printf("X");
			num = num - 10;
		}
		while(num>=9){
			printf("IX");
			num = num - 9;
		}
		while(num>=10){
			printf("X");
			num = num - 10;
		}
		while(num>=5){
			printf("V");
			num = num - 5;
		}
		while(num>=4){
			printf("IV");
			num = num - 4;
		}
		while(num>=1){
			printf("I");
			num = num - 1;
		}
	}
	
	return 0;
	
}
