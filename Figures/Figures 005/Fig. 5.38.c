#include<stdio.h>
#include<stdarg.h>

int sum(int count, ...){
	va_list args;
	int total = 0;
	int i;
	
	va_start(args, count);
	for(i = 0; i < count; i++){
		total += va_arg(args, int);
	}
	
	va_end(args);
	return total;
}

int main(){
	printf("Sum: %d\n", sum(4, 5, 10, 15, 20));
	return 0;
}
