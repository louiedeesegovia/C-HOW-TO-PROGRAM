#include<stdio.h>

int main(){
	int x, i, num, smallest;
	
	printf("How many digit/s?: ");
	scanf("%d", &x);
	
	if(x <= 0){
		printf("Please enter positive number!");
		return 1;
	}
	
	scanf("%d", &smallest);
	
	for(i = 1;i < x; i++){
		scanf("%d", &num);
		if(num < smallest){
			num = smallest;
		}
	}
	
	printf("Smallest number: %d", smallest);
	
	return 0;
}
