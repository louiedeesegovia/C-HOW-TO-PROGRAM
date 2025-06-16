#include<stdio.h>

int main(){
	
	int Byear, Bmonth, Bday;
	int Cyear, Cmonth, Cday;
	int age = 0, maxHR = 0, tmin = 0, tmax = 0;
	
	printf("\t[ ENTER USER'S BIRTHDATE ]\n");
	
	printf("Enter your birth year: ");
	scanf("%d", &Byear);
	
	printf("Enter your birth month (1-12): ");
	scanf("%d", &Bmonth);
	
	printf("Enter your birth day: ");
	scanf("%d", &Bday);
	
	printf("\n\t[ ENTER CURRENT DATE ]\n");
	
	printf("Enter current year: ");
	scanf("%d", &Cyear);
	
	printf("Enter current month: ");
	scanf("%d", &Cmonth);
	
	printf("Enter current day: ");
	scanf("%d", &Cday);
	
	age = Cyear - Byear;
	
	if((Cmonth < Bmonth) || (Cmonth == Bmonth && Cday)){
		age = age - 1 ;
	}
	
	maxHR = 220 - age;
	
	tmin = maxHR * 0.50;
	tmax = maxHR * 0.85;
	
	printf("\n");
	printf("Your age is : %d\n", age);
	printf("Maximum heart rate: %d bpm\n", maxHR);
	printf("Target heart rate range: %d - %d bpm\n", tmin, tmax);
	
	return 0;
}
