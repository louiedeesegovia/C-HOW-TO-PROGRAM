#include<stdio.h>

int main(){
	int num, square, cube;
	
	printf("number\t\tsquare\t\tcube\n");
	while(num <= 10){
		square = num*num;
		cube = num*num*num;
		printf("%d\t\t%d\t\t%d\n", num, square, cube);
		num++;
	}
	
	return 0;
}
