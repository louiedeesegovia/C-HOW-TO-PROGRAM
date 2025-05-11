#include<stdio.h>

int main(){
	char first, second;
	
	printf("Enter one character: ");
	scanf("%c", &first);
	
	printf("Letter: %c\n", first);
	fflush(stdin);
	
	printf("\nEnter second character: ");
	second=getchar();
	
	printf("ASCII value of character is -> %d", second);	
	
	return 0;
}
