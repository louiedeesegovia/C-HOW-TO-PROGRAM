#include<stdio.h>

int main(){
	int i = 1;
	
	Label:
		printf("%d ", i);
		
		i++;
		
		if(i<= 10){
			goto Label;
		}
		
		return 0;
	
	return 0;
}
