#include<stdio.h>
#include<assert.h>

int divide(int a, int b){
	assert(b != 0);
	return a / b;
	
}

int main(){
	int x = 10;
	int y = 2;
	
	printf("%d\n", divide(x, y));
	
	y = 0;
	
	printf("%d\n", divide(x, y));
	
	return 0;
}
