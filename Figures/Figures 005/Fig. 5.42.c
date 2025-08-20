#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i, n;
	
	printf("How many random numbers to generate? ");
	scanf("%d", &n);
	
	srand(time(0));
	
	printf("Random numbers: ");
	for(i = 0; i < n; i++){
		int num = rand() % 6 + 1;
		printf("%d ", num);
	}
	
	printf("\n");
	
	return 0;
}
