#include<stdio.h>

int main(){
	
	float rad, diam, circ, area;
	printf("Enter the radius of the circle: ");
	scanf("%f", &rad);
	
	diam = 2*rad;
	circ = 2*3.14159*rad;
	area = 3.14159*rad*rad;
	
	printf("Diameter: %.2f\n", diam);
	printf("Circumference: %.2f\n", circ);
	printf("Area: %.2f\n", area);
	
	return 0;
}
