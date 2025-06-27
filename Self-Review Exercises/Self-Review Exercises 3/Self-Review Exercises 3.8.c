#include<stdio.h>

int main(){
	int x, power, y, i;
	i = 1;
	power = 1;
	printf("Enter x: ");
	scanf("%d", &x);
	
	printf("Enter power: "); 
	scanf("%d", &y);
	
	while(i <= y){
		power = power * x; 
		++i; 
	}
	
	printf("power : %d\n", power);
	
	return 0;
}
