#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	
	fp = fopen("sample01.txt", "w");
	
	if(fp == NULL){
		printf("Error opening file.\n");
		return 1;
	}
	
	fprintf(fp, "Hello, this is a sample text.\n");
	fprintf(fp, "This file is created using write mode.\n");
	
	fclose(fp);
	
	printf("File written successfully.\n");
	
	return 0;
}
