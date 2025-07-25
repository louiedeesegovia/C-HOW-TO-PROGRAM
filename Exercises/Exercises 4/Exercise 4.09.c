#include<stdio.h>

int main(){
	int many;
	int i;
	int num;
	int sum = 0;
	
	printf("How many numbers?: ");
	scanf("%d", &many);
	
	for(i = 0; i < many; i++){
		scanf("%d", &num);
		sum+=num;
	}
	
	printf("sum: %d", sum);
	
	return 0;
}
