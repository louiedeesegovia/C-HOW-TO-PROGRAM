/*
	PSEUDOCODE
	START
	
	DECLARE principal (float), rate (float), interest (float)
	DECLARE days (int)
	
	SET interest to 0
	
	LOOP WHILE principal != -1
		DISPLAY "Enter loan principal (-1 to end): "
		INPUT principal
		
		IF principal != -1 THEN
			DISPLAY "Enter interest rate: "
			INPUT rate
			
			DISPLAY "Enter term of the loan in days: "
			INPUT days
			
			CALCULATE interest = principal * rate * days / 365
			
			DISPLAY "The interest charge is " + interest
		END IF 
	END WHILE
	END		
*/
#include<stdio.h>

int main(){
	float principal, rate, interest = 0;
	int days;
	while(principal != -1){
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		
		if(principal != -1){
			printf("Enter interest rate: ");
			scanf("%f", &rate);
			
			printf("Enter term of the loan in days: ");
			scanf("%d", &days);
			
			interest = principal * rate * days/365;
			printf("The interest charge is %.2f\n", interest);
		}
		printf("\n");
	}
	return 0;
}
