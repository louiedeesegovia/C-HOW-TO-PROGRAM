/*
	PSEUDOCODE 
	START
		DECLARE sales (float), salary (float), total (float)
		
		SET salary and total to 0
		
			LOOP WHILE sales != -1
				DISPLAY "Enter sales in dollars (-1 to end): "
				INPUT sales
				
					IF sales != -1 THEN
						CALCULATE total = sales * 0.09
						CALCULATE salary = total + 200
						
						DISPLAY "Salary is: ", salary
					END IF 
			END WHILE
	END
*/

#include<stdio.h>

int main(){
	float sales, salary = 0, total = 0;
	
	while(sales != -1){
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
	
			if(sales != -1){
				total = sales * 0.09;
				salary = total + 200;
	
			printf("Salary is: %.2f\n", salary);
		}
		printf("\n");
	}
	
	return 0;
}
