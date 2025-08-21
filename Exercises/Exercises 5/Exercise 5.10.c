#include <stdio.h>
#include <math.h> 

double roundoff(double x){
	
	return floor(x + 0.5); 
	
}

int main() {
    double x[100], y[100];
    int i, n;

    printf("How many numbers will you enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &x[i]); 

        y[i] = roundoff(x[i]);  
    }
    
    for(i = 0; i < n; i++){
    	printf("\nRound off %d: %.2lf", i+1, y[i]);
	}

    return 0;
}

