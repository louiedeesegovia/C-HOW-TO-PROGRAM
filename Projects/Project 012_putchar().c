#include<stdio.h>

int main(){
	char lowercase;
	
	printf("Enter one lowercase character: ");
	lowercase = getchar();
	
	printf("Lowercase character is: ");
	putchar(lowercase);
	
	printf("\nCharacter in Uppercase: ");
	putchar(lowercase-32);
	
	return 0;
}
