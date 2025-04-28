#include<stdio.h>

int main(){
	int x = 1;
	int total = 0;
	
	while(x<=100){
		total+=x;
		++x;
	}
	
	printf("%d\n", total);
	printf("%d\n", x);
	
	return 0;
}
