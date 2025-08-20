#include<stdio.h>
#include<setjmp.h>

jmp_buf buffer;

void second(){
	printf("In second() now. Jumping back!\n");
	longjmp(buffer, 1);
}


void first(){
	second();
	printf("This will never print.\n");
}

int main(){
	
	if(setjmp(buffer)){
		printf("Back in main via longjump!\n");
	}
	else{
		printf("calling first()...\n");
		first();
	}
	
	return 0;
}
