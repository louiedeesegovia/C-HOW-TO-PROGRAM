#include<stdio.h>

int main(){
	float A, B, C;
	
	printf("Enter A side: ");
	scanf("%f", &A);
	
	printf("Enter B side: ");
	scanf("%f", &B);
	
	printf("Enter C side: ");
	scanf("%f", &C);
	
	 if (A <= 0 || B <= 0 || C <= 0) {
        printf("All sides must be nonzero positive integers.\n");
        return 1;
    }

    // Check if it's a right triangle
    if ((A * A + B * B == C * C) ||
        (A * A + C * C == B * B) ||
        (B * B + C * C == A * A)) {
        printf("These sides CAN form a right triangle.\n");
    } else {
        printf("These sides CANNOT form a right triangle.\n");
    }
	
	return 0;
}
