#include<stdio.h>

int main(){
	
	int y;
	
	printf("Enter a number: ", y);
	scanf("%d", &y);
	
	while(y<=24){
		printf("%d\n", y);
		++y;
	}
	
	
	
	return 0;
}
