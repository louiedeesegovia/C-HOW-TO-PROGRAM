#include<stdio.h>

int main(void){
	
	int count = 1;
	
	while (count<=10){
		printf("%s\n", count % 2 ? "****" : "++++++++");
		count++;
	}
	
	return 0;
}
