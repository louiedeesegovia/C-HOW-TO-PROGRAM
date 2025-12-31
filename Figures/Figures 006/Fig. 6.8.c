#include<stdio.h>
#define SIZE 10

int main(void){
	int n[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	int i; 
	int j;
	
	printf("%s%13s%17s", "Element", "Value", "Histogram");
	
	for(i = 0; i < SIZE; i++){
		printf("\n");
		printf("%7d%13d ", i, n[i] );
		
		printf("  \t");
		for( j = 1; j <= n[i]; j++){
			printf("%c", '*');
		}
	}
	return 0;
}
