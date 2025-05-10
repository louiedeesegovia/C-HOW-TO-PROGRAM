#include <stdio.h>

int main() {
    int num = 1;

    while (num <= 300000000) {
        if (num == 100000000 || num == 200000000 || num == 300000000) {
            printf("%d\n", num);
        }
        num++;
    }
    
    return 0;
}

