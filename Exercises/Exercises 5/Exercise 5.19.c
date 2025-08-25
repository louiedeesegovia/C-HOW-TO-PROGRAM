#include<stdio.h>

int square(int asterisk){
	int i, j;
	
	for(i = 0; i < asterisk; i++){
		for(j = 0; j < asterisk; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	int asterisk;
	
	printf("Enter a number: ");
	scanf("%d", &asterisk);
	
	square(asterisk);
	
	return 0;
}
