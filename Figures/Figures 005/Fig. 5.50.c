#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void){
	int i;
	unsigned seed;
	
	printf("Enter seed: ");
	scanf("%u", &seed);
	
	srand(time(NULL));
	
	for(i = 1; i <= 10; i++){
		printf("%10d", 1 + (rand() % 6));
		
		if(i % 5 == 0){
			printf("\n");
		}
	}
	return 0;
}
