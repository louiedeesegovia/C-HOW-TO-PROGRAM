#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	// Set locale to the user's default (usually from the environment)
    setlocale(LC_ALL, "");

    // Or set to a specific locale, like US English
    setlocale(LC_ALL, "en_US.UTF-8");

    printf("Locale set!\n");
	
	//Set locale for all categories to user's environment default
	setlocale(LC_ALL, "");
	
	//LC_NUMERIC: Decimal separator
	printf("LC_NUMERIC Example: \n");
	struct lconv *loc = localeconv();
	printf("Decimal Point: %s\n\n", loc->decimal_point);
	
	//LC_TIME: Date/time format
	printf("LC_TIME Example:\n");
	time_t t = time(NULL);
	struct tm * tm_info = localtime(&t);
	char buffer[80];
	strftime(buffer, 80, "%c", tm_info);
	printf("Current Date and Time: %s\n\n", buffer);
	
	//LC_COLLATE: String comparison
	printf("LC_COLLATE Example: \n");
	char a[] = "abc";
	char b[] = "abc";
	int cmp = strcoll(a, b); //Locale-aware comparison
	printf("Comparison of '%s' and '%s': %d\n\n", a, b, cmp);
	
	//lC_CTYPE: Character classification
	printf("LC_CTYPE Example: \n");
	char ch = 'ñ';
	if(isalpha(ch)){
		printf("%c' is alphabetic\n", ch);
	}
	else{
		printf("%c' is not alphabetic\n", ch);
	}
	printf("\n");
	
	return 0;	
}
