#include<stdio.h>

int main(){
	char first, second;
	
	printf("Enter first character: ");
	first = getche();
	
	printf("\nEnter second character: ");
	second = getche();
	
	printf("\n\nFirst Character -> %c\n", first);
	printf("Second Character -> %c\n", second);
	
	return 0;
}
