#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
	FILE *fp = fopen("nonexistent.txt", "r");
	
	if(fp == NULL){
		// fopen failed, errno is set
		printf("Error opening file: %s\n", strerror(errno));
		printf("Error code: %d", errno);
	}
	else{
		fclose(fp);
	}
	return 0;
}
