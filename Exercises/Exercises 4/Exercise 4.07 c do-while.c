#include<stdio.h>

int main(){
	int x = 20;
	
	do{
		printf(" %d ,", x);
		x -= 6;
	}while(x >= -10);
	
	return 0;
}
