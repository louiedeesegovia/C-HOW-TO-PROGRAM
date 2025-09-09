#include<stdio.h>

int main(){
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
	int array[20];
	int *ptr = array;
	
	printf("\nsizeof c = %d\t\tsizeof(char) = %d", sizeof c, sizeof(char));
	printf("\nsizeof s = %d\t\tsizeof(short) = %d", sizeof s, sizeof(short));
	printf("\nsizeof i = %d\t\tsizeof(int) = %d", sizeof i, sizeof(int));
	printf("\nsizeof l = %d\t\tsizeof(long) = %d", sizeof l, sizeof(long));
	printf("\nsizeof f = %d\t\tsizeof(float) = %d", sizeof f, sizeof(float));
	printf("\nsizeof d = %d\t\tsizeof(double) = %d", sizeof d, sizeof(double));
	printf("\nsizeof ld = %d\t\tsizeof(long double) = %d", sizeof ld, sizeof(long double));
	printf("\nsizeof array = %d\tsizeof ptr = %d", sizeof array, sizeof ptr);
	
	return 0;
}
