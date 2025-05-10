// Find area of circle using #define

#include<stdio.h>
#define PI 3.142

int main(){
	float radius, area = 0;
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	
	printf("Area: %.2f", area);	
	
	return 0;
}
