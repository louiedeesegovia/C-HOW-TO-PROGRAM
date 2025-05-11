#include<stdio.h>

int main(){
	int x1 = 9;
	int y1 = 11;
	int x2 = 11;
	int y2 = 9;
	
	if(x1 < 10){
		printf("*****\n");
		if(y1 > 10){
		printf("*****\n");
		}
	}
	else{
		printf("#####\n");
		printf("$$$$$\n");
	}
	printf("\n\n");
	
	if(x2 < 10){
		printf("*****\n");
		if(y2 > 10){
		printf("*****\n");
		}
	}
	else{
		printf("#####\n");
		printf("$$$$$\n");
	}
	
	return 0;
}
