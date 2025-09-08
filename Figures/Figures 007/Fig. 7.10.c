#include<stdio.h>
#include<ctype.h>

char convertion(char *sPtr){
	
	while(*sPtr != '\0'){
		if(islower(*sPtr)){
			*sPtr = toupper(*sPtr);
		}
		
		++sPtr;
	}
}

int main(){
	
	char string[] = "characters and $36.98";
	
	printf("The string: %s", string);
	
	convertion(string);
	
	printf("\n");
	printf("The string: %s", string);
	
}
