#include<stdio.h>

int main(){
	FILE *file;
	char ch;
	
	//Open file in read mode
	file = fopen("example.txt", "r");
	
	//Check if file exists
	if(file == NULL){
		printf("Error: Could not open file.\n");
		return 1;
	}
	
	//Read and display contents of the file
	while((ch = fgetc(file)) != EOF){
		putchar(ch);
	}
	
	//Close the file
	fclose(file);
	
	return 0;
}
