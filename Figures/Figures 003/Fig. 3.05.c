/*
 *
*/
#include<stdio.h>
#define PI 3.14159

int main(){
	double hole_diameter;
	double edge_diameter;
	double thickness;
	double density;
	double quantity;
	double weight = 0;
	double hole_radius = 0;
	double edge_radius = 0;
	double rim_area = 0;
	double unit_weight = 0;
	
	printf("Inner diameter in centimeters: ");
	scanf("%lf", &hole_diameter);
	
	printf("Outer diameter in centimeters: ");
	scanf("%lf", &edge_diameter);
	
	printf("Thickness in centimeters: ");
	scanf("%lf", &thickness);
	
	printf("Material density in grams per cubic centimeter: ");
	scanf("%lf", &density);
	
	printf("Quantity in batch: ");
	scanf("%lf", &quantity);
	
	hole_radius = hole_diameter / 2.0;
	edge_radius = edge_diameter / 2.0;
	
	rim_area = PI * edge_radius * edge_radius -
			   PI * hole_radius * hole_radius;
	
	unit_weight = rim_area * thickness * density;
	weight = unit_weight * quantity;
	
	printf("\nThe expected weight of the batch is %.2f", weight);
	printf(" grams.\n");
	
	return 0;
	
	
}
