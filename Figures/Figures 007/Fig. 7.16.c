#include<stdio.h>

size_t getSize(float *ptr){
	return sizeof(ptr);
}

int main(void){
	float array[20];
	
	printf("Th number of bytes in the array is %d"
			"\nThe number of bytes returned by getSize is %d\n",
			sizeof(array), getSize(array));
			
	return 0;
	
}
