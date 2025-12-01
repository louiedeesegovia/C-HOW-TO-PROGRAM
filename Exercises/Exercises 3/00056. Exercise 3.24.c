#include<stdio.h>

int main(){
	int num = 1, n = 1, item, largest = 0;
	
	while(n <= 10){
		printf("Enter a number %d: ", num++);
		scanf("%d", &item);	
		n++;
		if( largest < item ){
			largest = item;
		}
	}
	printf("The largest number is: %d", largest);
	
	
	
	return 0;
	
}
