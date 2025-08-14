#include<stdio.h>

int main(){
	int person;
	int aNumber;
	int oldLimit;
	int currentBalance;
	float newLimit;
	
	printf("\t--CUSTOMERS DETAILS--\n");
	for(person = 1; person <= 3; person++){
		printf("\nEnter Account number: ");
		scanf("%d", &aNumber);
		
		printf("Enter previous credit limit: ");
		scanf("%d", &oldLimit);
		
		printf("Enter current balance: ");
		scanf("%d", &currentBalance);
		
		newLimit = oldLimit/2;
		
		printf("\nAccount Number: %d", aNumber);
		printf("\nNew Credit Limit: $%.2lf\n", newLimit);
		printf("-------------------------------------\n");
		
		if(currentBalance > newLimit){
			printf("Warning: Current balance exceeds new credit limit!\n");
		}
	}
	return 0;
}
