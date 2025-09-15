#include<stdio.h>

int check(int x){
	return x;
}

int main(){
	int i;
	
	for(i = 3; i <= 11; i+=2){
		printf("%d ", check(i));
	}
		
	return 0;
}
