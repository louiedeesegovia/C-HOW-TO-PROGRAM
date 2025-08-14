#include<stdio.h>

int main(){
	int i, x, num;
	 
	 for(i = 1; i <= 5; i++){
	 	printf("\nEnter a number: ");
	 	scanf("%d", &num);
	 	if(num <= 30){
	 		for(x = 1; x <= num; x++){
	 		printf("*");
		 	}	
		}
		else{
			printf("Invalid number!");
		}
	 }
	return 0;
}
