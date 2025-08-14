#include<stdio.h>

int main(){
	int i, x;
	int num = 9;
	int j;
	
	for(i = 1; i <= 10; i++){
		for(x = 1; x <= num; x++){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		num -= 1;
		printf("\n");
	}
	
	return 0;
}
