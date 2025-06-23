#include<stdio.h>

int main(void){
	int sum, x;
	x = 1;
	sum = 0;
	
	
	while(x <= 10){
		sum = sum + x;
		x++;
	}
	
	printf("The sum is: %d\n", sum);
	
	
	return 0;
}
