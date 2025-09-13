#include<stdio.h>
#include <stdbool.h>

int checkPrime(int prime){
	int i, j;
	bool isPrime;
	
	for(i = 2; i <= prime; i++){
		isPrime = true;
		
		for(j = 2; j * j <= i; j++){
			if(i % j == 0){
				isPrime = false;
				break;
			}
		}
	}
	if (isPrime) {
            printf("yes it's prime'");
        }else if(prime == 1 || prime == 2 || prime == 3){
        	printf("it's prime");
		}else{
        	printf("not prime");
		}
	
}

int main(){

	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("The number is: ");
	
	checkPrime(number);
	return 0;
}
