#include<stdio.h>

int main(){
	int i;
	int sum = 0, num;
	
	for(i = 2; i <= 30; i += 2){
		sum += i;
	}
		printf("%d\n", sum);
	return 0;
}
