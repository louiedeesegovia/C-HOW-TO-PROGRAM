#include<stdio.h>

int mystery(int a, int b){
	
	if(b == 1){
		return a;
	} else{
		return a + mystery(a, b-1);
	}
}

int main(){
	int x;
	int y;
	
	printf("Enter two integer: ");
	scanf("%d%d", &x, &y);
	
	printf("The result is: %d", mystery(x, y));
	
	return 0;
}
