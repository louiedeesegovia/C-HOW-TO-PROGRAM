#include<stdio.h>
#include<time.h>

int main(){
	long i; 
	
	time_t currentTime;
	time(&currentTime);
	
	printf("Current time: %s", ctime(&currentTime));
	
	clock_t start, end;
	double cpu_time_used;
	
	start = clock();
	
	for(i = 0; i < 100000000; i++);
	
	end = clock();
	
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	
	printf("Loop took %f seconds to execute.\n", cpu_time_used);
	
	return 0;
}
