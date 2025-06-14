/* Calculate the product of three integers*/
#include <stdio.h>

int main(void){
	int x, y, z, result; /*declare variables*/
	
	printf("Enter 3 integer: ", x, y, z); /*prompt*/
	scanf("%d %d %d", &x, &y, &z); /*read three integers */
	
	result = x*y*z;/* multiply values */
	
	
	printf("The product is %d", result); /* display result */
	return 0;
} /* end function main */
