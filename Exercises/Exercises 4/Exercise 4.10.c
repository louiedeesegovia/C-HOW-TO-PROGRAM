#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;
    float average;
    int sumfinal;

    printf("Enter numbers (9999 to stop):\n");

    for (;;) {
    	if (num != 9999){
    	scanf("%d", &num);
		sum += num;
        count++;	
		}
		else{
			break;
		}
    }
    
    sumfinal = sum-9999;

    if (count > 0) {
        average = (float)sumfinal / count;
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}

