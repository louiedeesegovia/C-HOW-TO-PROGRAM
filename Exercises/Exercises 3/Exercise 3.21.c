#include <stdio.h>

int main(){
	int hours;
	float rate;
	float salary = 0; 
	float temp1 = 0;
	float temp2 = 0;
	float temp3 = 0;
	
	while(hours != -1){
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours);
		
		if(hours != -1 && hours <= 40){
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf("%f", &rate);
			
			salary = hours * rate;
		
			printf("Salary is %.2f\n", salary);
			
			
		}
		if(hours != -1 && hours > 40){
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf("%f", &rate);
			
			temp1 = hours - 40;
			temp2 = rate / 2;
			temp3 = temp1 * temp2;
			salary = hours * rate + temp3;
				
			printf("Salary is %.2f\n", salary);
			}
		printf("\n");
	}
	
	return 0;
	
}
