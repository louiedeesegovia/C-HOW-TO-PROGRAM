// Find months and remaining day from total.
// This program displays months with exactly 30 days only

#include<stdio.h>

int main(){
	int days, temp, remaining;
	
	printf("Enter day/s: ");
	scanf("%d", &days);
	
	temp = days/30;
	remaining = days%30;
	
	printf("%d month/s and %d remaining days.", temp, remaining);
	
	return 0;
}
