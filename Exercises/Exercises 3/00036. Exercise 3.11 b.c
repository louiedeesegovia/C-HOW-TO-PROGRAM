#include<stdio.h>

int main(){
	
	int x = 1; 
	int total = 0;
	
	while(x<=10){ //5<=10
		printf("\n");
		total +=x; //total = total + x = 11 + 5; total = 16
		printf("%d\n", total); //total = 16
		++x; //5+1=6
		printf("\t%d\n", x); //x = 5
		
	}
	
	printf("\n\n%d", total);
	
	return 0;
}
/*
2
	2
4
	3
7
	4
11
	5
16
	6

	*/
