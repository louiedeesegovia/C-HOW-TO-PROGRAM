#include<stdio.h>

int main(void){
	int a = 7;
	int *ahead;
	
	ahead = &a;
	
	printf("The address of a is %p"
			"\nThe value of ahead is %p", &a, ahead);
	
	printf("\n");
	
	printf("\nThe value od a is %d"
			"\nThe value of *ahead is %d", a, *ahead);
	
	printf("\n");
			
	printf("\nShowing that * and & are complements of each other.");
	printf("\n&*ahead = %p", &*ahead);
	printf("\n*&ahead = %p", *&ahead);		
	return 0;
}
