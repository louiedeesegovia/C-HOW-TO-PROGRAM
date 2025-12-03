#include<stdio.h>

int main(){
	
	int num, n = 1;
	int largest1 = 1, largest2 = 1;
	int value = 1;
	int temp = 0;
	
	while(n <= 10){
		printf("Enter a number%d: ", value++);
		scanf("%d", &num);
		n++;
		if(largest1 < num){
			largest1 = num;
			if(largest2 < largest1){
				largest2 = largest1;
				largest1 = temp;
			}
		}
	}
	printf("Largest is %d\n", largest2);
	printf("2nd Largest is %d\n", largest1);
	
	
	return 0;
}
