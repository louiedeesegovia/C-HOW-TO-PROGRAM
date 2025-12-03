#include<stdio.h>

int main(){
	int n = 3;
	
	printf("A\tA+2\tA+4\tA+6\n");
	while( n <= 15){
		printf("%d\t%d\t%d\t%d\n", n++, n+2, n+4, n+6);
		n++;
		n++;
	}
	
	return 0;
}

