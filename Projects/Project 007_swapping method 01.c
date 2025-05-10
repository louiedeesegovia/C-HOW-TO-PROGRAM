#include<stdio.h>

int main(){
	int x, y;
	int temp = 0;
	
	printf("Enter value of x: ");
	scanf("%d", &x);
	
	printf("Enter value of y: ");
	scanf("%d", &y);
	
	printf("Before swapping -> x = %d ; y = %d\n", x, y);
	
	temp = x;
	x = y;
	y = x;
	
	printf("After swapping -> x = %d ; y = %d\n", x, y);
	
	return 0;
}
