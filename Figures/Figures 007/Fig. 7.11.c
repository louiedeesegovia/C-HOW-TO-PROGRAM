#include<stdio.h>

void printCharacters(char *sPtr){
	
	for(; *sPtr != '\0'; sPtr++){
		printf("%c", *sPtr);
	}
	
}

int main(){
	char string[] = "print every characters in string";
	
	printf("The string: ");
	printCharacters(string);
	printf("\n");
	
	return 0;
}
