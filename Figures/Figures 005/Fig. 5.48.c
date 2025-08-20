#include<stdio.h>
#include<time.h>

int main(){
	time_t currentTime;
	struct tm *localTime;
	
	time(&currentTime);
	
	localTime = localtime(&currentTime);
	
	printf("Current date and time: %s", asctime(localTime));
	
	return 0;
}
