#include<stdio.h>
#include<ctype.h>

int main(){
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if(isalpha(ch)){
		printf("'%c' is a letter.\n", ch);
		
		if(isupper(ch)){
			printf("It is a uppercase.\n");
			printf("Lowercase: %c\n", tolower(ch));
		}else{
			printf("It is a lowercase.\n");
			printf("Uppercase: %c\n", toupper(ch));
		}
	}else if(isdigit(ch)){
		printf("'%c' is a digit.", ch);
	}else if(isspace(ch)){
		printf("'%c' is a whitespace character.\n", ch);
	}else{
		printf("'%c' is a special character.\n", ch);
	}
	return 0;
}
