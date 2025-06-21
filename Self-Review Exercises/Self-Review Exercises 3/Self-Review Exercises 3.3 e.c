#include<stdio.h>

int main(){
	
	int x = 2;
	int total = 20;
	
	total -= --x;
	
	printf("x = %d\n", x);
	printf("total = %d\n", total);
	
	return 0;

}
