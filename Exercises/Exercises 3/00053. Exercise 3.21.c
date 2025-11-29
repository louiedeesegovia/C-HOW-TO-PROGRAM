/*
	PSEUDOCODE 
	START
		
		DECLARE hours (int)
		DECLARE rate (float), salary (float), salary (float), temp1 (float), temp2 (float), temp3 (float)
		
		SET salary, temp1, temp2, temp3 to 0
		
		LOOP WHILE hours != -1
			DISPLAY "Enter # of hours worked (-1 to end): "
			INPUT hours
			
			IF hours != -1 AND hours <= 40 THEN 
				DISPLAY "Enter hourly rate of the worker ($00.00): "
				INPUT rate
				
				CALCULATE salary = hours * rate
				
				DISPLAY "Salary is " + salary 
			END IF
			
			IF hours != -1 AND hours > 40 THEN
				DISPLAY "Enter hourly rate of the worker ($00.00): "
				INPUT rate
				
				CALCULATE temp1 = hours - 40
				CALCULATE temp2 = rate / 2
				CALCULATE temp3 = temp1 * temp2
				CALCULATE salary = hours * rate + temp3
				
				DISPLAY "Salary is " + salary
			END IF 
		END WHILE
	END
 
*/

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
