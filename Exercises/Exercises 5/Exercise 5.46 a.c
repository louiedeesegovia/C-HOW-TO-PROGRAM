#include<stdio.h>

double cube(float number);

int main(){
	float number = 2.3;
	
	printf("%.1lf ", cube(number));
	
	return 0;
}

double cube(float number){
	return number * number * number;
}
