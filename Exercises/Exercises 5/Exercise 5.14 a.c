#include<stdio.h>

int even(int x){
	
	return x;
}

int main(){
	
	int i;
	for(i = 2; i <= 10; i+=2){
		printf("%d ", even(i));
	}
	
	
	return 0;
}
