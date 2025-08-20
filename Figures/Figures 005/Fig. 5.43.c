#include<stdio.h>
#include<string.h>

int main(){
	char str1[100], str2[100];
	
	printf("Enter first string: ");
	gets(str1);
	
	printf("Enter second string: ");
	gets(str2);
	
	printf("Length of first string: %lu\n", strlen(str1));
	printf("Length of second string: %lu\n", strlen(str2));
	
	if(strcmp(str1, str2) == 0){
		printf("The Strings are equal.\n");
	}
	else{
		printf("The strings are different.\n");
	}
	
	strcpy(str2, str1);
	printf("After copying, second string: %s\n", str2);
	
	return 0;
}
