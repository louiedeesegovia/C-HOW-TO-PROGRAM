#include<stdio.h>

int main(){
	int i, x;
	int num = 10;
	
	for(i = 1; i <= 10; i++){
		for(x = 1; x <= num; x++){
			printf("*");
		}
		num -= 1;
		printf("\n");
	}
	
	return 0;
}
