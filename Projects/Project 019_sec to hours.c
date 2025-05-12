#include<stdio.h>

int main(){
	int totalsec, hours, minutes, seconds;
	
	printf("Enter total sec: ");
	scanf("%d", &totalsec);
	
	hours = totalsec/3600;
	totalsec = totalsec%3600;
	minutes = totalsec/60;
	seconds = totalsec%60;
	
	printf("%dhour : %dmin : %dsec", hours, minutes, seconds);
	
	return 0;
}
