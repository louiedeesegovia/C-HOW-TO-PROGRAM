#include<stdio.h>

int sum(int n);

int main(){
	
	int n = 1;
	
	printf("%d ", sum( n ));
	
	return 0;
}

int sum(int n){
	if (n < 10){
		n += 1;
		return sum(n);
	} else{
		return n;
	}
}

