#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int num) {
    if (num < 2){
    	return false;	
	}
	 
	int j;
    for (j = 2; j * j <= num; j++) {
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
	int i;
	
    for (i = 2; i <= 10000; i++) {
        if (checkPrime(i)) {
            printf("[%d]\t", i);
            count++;

            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }

    return 0;
}

