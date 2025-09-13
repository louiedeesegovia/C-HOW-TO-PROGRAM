#include<stdio.h>

int mystery(int a, int b);

int main(void){
	int x;
	int y;
	
	printf("Enter two integers: ");
	scanf("%d%d", &x, &y);
	
	printf("The result is: %d \n", mystery(x, y));
	
	return 0;
}

int mystery(int a, int b){ 
	if(b == 0){
		return 0;
	} else if(b > 0){
		return a + mystery(a, b - 1);
	}else{
		return -mystery(a, -b);
	}
}
