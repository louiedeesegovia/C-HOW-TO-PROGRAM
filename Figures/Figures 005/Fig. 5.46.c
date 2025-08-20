#include<stdio.h>
#include<time.h>

int main(){
	time_t now;
	struct tm *local;
	
	time(&now);
	
	local = localtime(&now);
	printf("Year : %d\n", local -> tm_year + 1900);
	printf("Month: %d\n", local -> tm_mon + 1);
	printf("Day: %d\n", local -> tm_mday);
	printf("Hour: %d\n", local -> tm_hour);
	printf("Minute: %d\n", local -> tm_min);
	printf("Second: %d\n", local -> tm_sec);
	
	return 0;
}
