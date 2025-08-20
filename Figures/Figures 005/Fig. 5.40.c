#include<stdio.h>
#include<stddef.h>

int main(){
	
	size_t length = 5;
	int numbers[] = {10, 20, 30, 40, 50};
	
	printf("The size of the array is: %zu elements\n", length);
	
	int *start = &numbers[1];
	int *end = &numbers[4];
	
	ptrdiff_t diff = end - start;
	printf("Difference between pointers: %td elements\n", diff);
	
	return 0;
}
