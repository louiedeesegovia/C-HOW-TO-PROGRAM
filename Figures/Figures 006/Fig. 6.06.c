#include<stdio.h>
#define SIZE 12

int main(){
	int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	int total = 0;
	int i;
	
	for(i = 0; i < SIZE; i++){
		total += a[i];
	}
	
	printf("Total score: %d", total);
	
	return 0;
}
