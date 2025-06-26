#include<stdio.h>

int main(){
	int i, y;
	
	printf("Enter number for 1: ");
	scanf("%d", &i);
	printf("Enter number for 2: ");
	scanf("%d", &y);
	
	if (i<y){
		printf("%d is less than %d", i, y);
	}
	else if(i==y){
		printf("%d is equal to %d", i, y);
	}
	else{
		printf("%d is greater than %d", i, y);
	}
	
	return 0;
}

