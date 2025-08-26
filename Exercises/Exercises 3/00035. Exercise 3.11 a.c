#include<stdio.h>

int main(){
	int age;
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	if(age>=65){
		printf("Age is greater than or equal to 65\n");
	}
		
	else{
		printf("Age is less than 65\n");
	}
		
	return 0;
}
