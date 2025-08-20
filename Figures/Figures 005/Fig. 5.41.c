#include<stdio.h>
#include<stdlib.h>

int main(){
	int *numbers;
	int i, n;
	
	printf("Enter how many numbers: ");
	scanf("%d", &n);
	
	numbers = (int*)malloc(n * sizeof(int));
	
	if(numbers == NULL){
		printf("Memory allocation failed!\n");
		exit(1);
	}
	
	for(i = 0; i < n; i++){
		printf("Enter number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}
	
	printf("You entered: ");
	for(i = 0; i < n; i++){
		printf("%d", numbers[i]);
	}
	printf("\n");
	
	free(numbers);
	
	return 0;
}
