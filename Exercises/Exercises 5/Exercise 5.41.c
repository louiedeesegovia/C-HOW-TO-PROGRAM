#include <stdio.h>
#include <math.h>

double distance(int a, int b, int c, int d) {
    double side1 = (c - a) * (c - a);
    double side2 = (d - b) * (d - b);
    double dist = sqrt(side1 + side2);
    
    return dist;
}

int main() {
    int x1, y1, x2, y2;
    
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);
    
    printf("Result: %.2lf\n", distance(x1, y1, x2, y2));
        
    return 0;
}

