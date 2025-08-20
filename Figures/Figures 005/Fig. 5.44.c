#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[100] = "Hello ";
	char str2[100] = "World ";
	char *pointer;
	
	strcat(str1, str2);
	printf("Concatenated string: %s\n", str1);
	
	pointer = (strchr(str1, 'W'));
	if(pointer != NULL){
		printf("Character 'W' found at position: %ld\n", pointer - str1);
	}
	else{
		printf("Character 'W' not found.\n");
	}
	
	return 0;
}
