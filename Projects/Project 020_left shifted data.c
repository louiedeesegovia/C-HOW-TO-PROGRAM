#include<stdio.h>

int main(){
	int x, y;
	
	printf("Enter integer: ");
	scanf("%d", &x);
	
	x<<= 2;
	y = x;
	
	printf("The left shifted data: %d", y); 
	
	return 0;
}
