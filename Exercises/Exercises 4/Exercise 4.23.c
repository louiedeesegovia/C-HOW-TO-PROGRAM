#include <stdio.h>
#include <math.h>

int main(void) {
    int principal = 100000; 
    int rate;               
    int year;

    printf("Year\t\tAmount on deposit\n");

    for (rate = 5; rate <= 10; rate++) {  
        printf("\nInterest rate: %d%%\n", rate);
        for (year = 1; year <= 10; year++) {
            
            double factor = pow(1.0 + rate / 100.0, year);
            int amount = (int)(principal * factor + 0.5); 

            printf("%4d\t\t$%d.%02d\n", year, amount / 100, amount % 100);
        }
    }

    return 0;
}

