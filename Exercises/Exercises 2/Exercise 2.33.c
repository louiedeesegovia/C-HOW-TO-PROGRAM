//IDNo. #00034

#include<stdio.h>

int main(){
    int Total, Cost, Average, Park, Tolls;
    float FuelCost, TotalCost;
    
    printf("Total miles driven per day: ");
    scanf("%d", &Total);
    
    printf("Cost per gallon of gasoline: ");
    scanf("%d", &Cost);
    
    printf("Average miles per gallon: ");
    scanf("%d", &Average);
    
    printf("Parking fees per day: ");
    scanf("%d", &Park);
    
    printf("Tolls per day: ");
    scanf("%d", &Tolls);
    
    // Calculate total fuel cost
    FuelCost = (float)Total / Average * Cost;
    
    // Calculate total cost per day
    TotalCost = FuelCost + Park + Tolls;
    
    printf("Your total daily driving cost is: $%.2f\n", TotalCost);
    
    // Carpooling savings calculation
    int num_carpoolers;
    printf("Enter the number of people in the carpool (including yourself): ");
    scanf("%d", &num_carpoolers);
    
    if (num_carpoolers > 1) {
        float SharedCost = TotalCost / num_carpoolers;
        float Savings = TotalCost - SharedCost;
        printf("Each person pays: $%.2f\n", SharedCost);
        printf("You save: $%.2f per day by carpooling with %d others.\n", Savings, num_carpoolers - 1);
    } else {
        printf("No savings since you're driving alone.\n");
    }

    return 0;
}


