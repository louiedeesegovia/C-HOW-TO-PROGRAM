#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *source, *destination;
	char text;
	
	source = fopen("sample02.txt", "r");
	
	if(source == NULL){
		printf("Error!!! file cannot be open.");
		return 1;
	}
	
	destination = fopen("sample03.txt", "w");
	
	if(destination == NULL){
		printf("Error!!! file cannot be open.");
		fclose(source);
		return 1;
	}
	
	while((text = fgetc(source)) != EOF){
		fputc(text, destination);
	}
	
	fclose(source);
	fclose(destination);
	
	printf("Print Successfully!");
	
	return 0;
}

