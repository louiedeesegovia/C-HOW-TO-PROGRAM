#include<stdio.h>

int main(){
	int value;
	
	printf("Enter integer: ");
	scanf("%d", &value);
	
	switch(value % 2){
		case 0:
			printf("Even integer\n");
		case 1:
			printf("Odd integer\n");
	}
	
	
	return 0;
}
