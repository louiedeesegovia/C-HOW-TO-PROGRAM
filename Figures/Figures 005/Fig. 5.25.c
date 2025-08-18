#include <stdio.h>

int main() {
    long double x;
    long double y;
    long double z;
    long double a;
    
    printf("Enter value of ( x ): ");
    scanf("%Lf", &x);
    printf("Enter value of ( y ): ");
    scanf("%Lf", &y);
    printf("Enter value of ( z ): ");
    scanf("%Lf", &z);
    printf("Enter value of ( a ): ");
    scanf("%Lf", &a);
    
    long double result1 = x * y * z * a;
    long double result2 = x + y + z + a;
    long double result3 = result1 / 3.14;
    long double result4 = result2 / 3.14;
    long double result5 = result1 * result2;
    long double result6 = result1 + result2;

    printf("%Lf\n", result1);
    printf("%Lf\n", result2);
    printf("%Lf\n", result3);
    printf("%Lf\n", result4);
    printf("%Lf\n", result5);
    printf("%Lf\n", result6);

    return 0;
}
