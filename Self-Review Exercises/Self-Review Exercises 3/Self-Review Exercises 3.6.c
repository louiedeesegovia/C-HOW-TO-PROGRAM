#include<stdio.h>

int main(void){
	int product=5, x=5;
	
	product*=x++;
	printf("product = %d\n", product);
	printf("x = %d", x);
	
}
