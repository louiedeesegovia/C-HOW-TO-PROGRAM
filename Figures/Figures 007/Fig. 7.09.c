#include<stdio.h>

void cubeByReference(int *nPtr){
	*nPtr = *nPtr * *nPtr * *nPtr;
}

int main(void){
	
	int number = 5;
	
	cubeByReference(&number);
	
	printf("Value: %d", number);
	
	return 0;
}
