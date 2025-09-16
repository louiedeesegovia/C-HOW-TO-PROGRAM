#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	float thunder = 0;
	int customer, business = 1, total = 0;
	int day = 1, people, income = 0;
	int power = 0;
	float watts = 0, bill = 0, electric = 0;
	
	jump:
	printf("COMPUTER SHOP SIMULATION");
	start:
	if(business <= 23){
			srand(time(NULL));
			customer = rand() % 6;
		
			printf("\n\n--CUSTOMER--: %d", customer);
			printf("\nDay[%d]", day);
			printf("\nHow many Customer: ");
			scanf("%d", &people);
			income = people * 90;
			total = total + income;
			printf("Income: %d", income);
			business++;
			day++;
		
			if(customer == 0){
				electric = electric + 10;
			}
			else if(customer == 1){
				power = 700 * 9;
				watts = power / 1000;
				bill = watts * 10;
				electric = electric + bill;
			}
			else if(customer == 2){
				power = 700 * 18;
				watts = power / 1000;
				bill = watts * 10;
				electric = electric + bill;
			}
			else if(customer == 3){
				power = 700 * 27;
				watts = power / 1000;
				bill = watts * 10;
				electric = electric + bill;
			}	
			else if(customer == 4){
				power = 700 * 36;
				watts = power / 1000;
				bill = watts * 10;
				electric = electric + bill;
			}
			else if(customer == 5){
				power = 700 * 45;
				watts = power / 1000;
				bill = watts * 10;
				electric = electric + bill;
			}
			else{
				return 0;
			}
				printf("\nElectric %.2f", electric);
				goto start;
		}
	
	else{
		
		printf("\nTotal: %d", total);
		float divide;
		divide = total / 2;
		float maintenance = divide - electric;
		printf("\nMaintenance: %.3f", maintenance);
		printf("\nIncome: %.3f", divide);
		
		}
		
	return 0;
}
