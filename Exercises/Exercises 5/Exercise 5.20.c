#include<stdio.h>

void square(int area, char symbol){
	int i, j;
	
	for(i = 0; i < area; i++){
		for(j = 0; j < area; j++){
			printf("%c", symbol);
		}
		printf("\n");
	}
	
}


int main(){
	int area; 
	char symbol;
	
	printf("Enter the area: ");
	scanf("%d", &area);
	
	getchar();
	
	printf("Enter the symbol: ");
	scanf("%c", &symbol);
	
	square(area, symbol);
	
	return 0;
}
