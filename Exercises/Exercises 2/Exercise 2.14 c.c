#include<stdio.h>

int main(){
	int y, a, x, num;
	
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of x: ");
	scanf("%d", &x);

	y = a * (x * x * x ) + 7;
	
	num = ( a * x ) * x * ( x + 7 );
	
	if(y==num){
		printf("%d is equal to %d", y, num);
	}
	else{
		printf("%d is NOT EQUAL to %d", y, num);
	}
	
	return 0;
}
