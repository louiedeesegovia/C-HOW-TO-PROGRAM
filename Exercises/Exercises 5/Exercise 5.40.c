#include <stdio.h>

int main() {
    static int count = 1;  // static local variable (preserves value between calls)

    printf("main called %d time(s)\n", count++);

    if (count <= 10) { // limit recursion, otherwise it may run until stack overflow
        main(); 
    }

    return 0;
}

