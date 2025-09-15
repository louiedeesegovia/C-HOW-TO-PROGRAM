#include<stdio.h>

int check(int x){
	return x;
}

int main(){
	int i;
	
	for(i = 6; i <= 22; i+=4){
		printf("%d ", check(i));
	}
	
	return 0;
}
