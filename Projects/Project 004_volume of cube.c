// Find volume of cube

#include<stdio.h>

int main(){
	int length, base, height, volume = 0;
	
	printf("Enter value of length: ");
	scanf("%d", &length);
	
	printf("Enter value of base: ");
	scanf("%d", &base);
	
	printf("Enter value of height: ");
	scanf("%d", &height);
	
	volume = length * base * height;
	
	printf("Volume: %d", volume);
	
	return 0;
}
