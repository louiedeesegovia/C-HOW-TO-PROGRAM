#include<stdio.h>

int main(){
	int binary, check, proceed = 1, n = 1, solution;
	
	printf("Enter a binary: ");
	scanf("%d", &binary);
	
	while(binary > 0){
		check = binary % 10;
		printf("%d\n");
		if(check != 0 && check != 1){
			proceed = 0;
			break;
		}
		binary /= 10;
		printf("%d\n", binary);
	}
	if(proceed){
		printf("Binary!");
	}
	else{
		printf("Not Binary!");
	}
	
	
		
	
	return 0;
}
