#include<stdio.h>

int main(void){
	int x = 1, total = 0, y;
	
	while(x<=10){//5
		y=x*x;//y=5*5
		printf("%d\n", y);//25
		total +=y;//total = 55 
		++x;//5
	}
	printf("Total is %d\n", total);
	
	
	return 0;
}
/*
1
4
9
16
25
36
49
64
81
100
Total is 385
*/
