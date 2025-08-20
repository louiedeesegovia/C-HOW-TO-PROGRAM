#include<stdio.h>
#include<math.h>

int main(){
	float x = ceil( -fabs( -8 + floor(-5.5)));
	
	printf("%.2f", ceil(x));
		
	return 0;
}
