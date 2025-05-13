#include<stdio.h>

int main(){
	int skip;
	
	printf("Enter 0 for skip \n"); 
	printf("Enter 1 for continue \n");
	printf("Enter choice: ");
	scanf("%d", &skip);
	
	if(skip == 0){
		goto LABEL;
	}
	printf("Hi ");
	
	LABEL:
	printf("po!!!");
	
	return 0;
}
